#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <ThreeWire.h>
#include <RtcDS1302.h>

// OLED display
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// DS1302 -> IO, SCLK, CE
ThreeWire myWire(12, 14, 13);  // DAT=D4, CLK=D5, RST=D2
RtcDS1302<ThreeWire> Rtc(myWire);

void setup() {
  Serial.begin(115200);

  // OLED
  Wire.begin(6, 5); // SDA = D1, SCL = D6
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println("RTC Starting...");
  display.display();

  // RTC
  Rtc.Begin();

  if (!Rtc.IsDateTimeValid()) {
    Serial.println("RTC time not valid. Setting manual time...");

    // ตั้งเวลาเองแบบแม่นๆ: ปี, เดือน, วัน, ชั่วโมง, นาที, วินาที
    RtcDateTime newTime(2025, 5, 26, 13, 45, 0);
    Rtc.SetDateTime(newTime);
  }

  if (Rtc.GetIsWriteProtected()) {
    Rtc.SetIsWriteProtected(false);
  }

  if (!Rtc.GetIsRunning()) {
    Rtc.SetIsRunning(true);
  }
}

void loop() {
  RtcDateTime now = Rtc.GetDateTime();

  char timeBuffer[20];
  snprintf(timeBuffer, sizeof(timeBuffer), "%02d:%02d:%02d", now.Hour(), now.Minute(), now.Second());

  display.clearDisplay();
  display.setCursor(0, 20);
  display.println(timeBuffer);
  display.display();

  delay(1000);
}
