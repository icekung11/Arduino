# IoT & Arduino Projects Collection 🌟

คอลเลกชันโปรเจกต์ Arduino/ESP8266/ESP32 สำหรับงาน IoT และงานควบคุมอัตโนมัติเบื้องต้น พัฒนาด้วย Arduino IDE

---

## 📋 รายการโปรเจกต์

| โปรเจกต์ | คำอธิบาย |
|---------|----------|
| `DHt11_nr` | อ่านค่าอุณหภูมิและความชื้นจากเซ็นเซอร์ DHT11 |
| `pir_blynk` | ตรวจจับการเคลื่อนไหวด้วย PIR Sensor และแจ้งเตือนผ่าน Blynk |
| `pir_motion` | ตรวจจับการเคลื่อนไหวด้วย PIR Sensor (พื้นฐาน) |
| `pump` | ระบบควบคุมปั๊มน้ำอัตโนมัติ |
| `relay_blynk_control` | ควบคุม Relay ผ่านแอป Blynk |
| `rgb_light` | ควบคุมไฟ RGB (สีและความสว่าง) |
| `flame_ss.ino` | ตรวจจับเปลวไฟด้วย Flame Sensor |
| `oled_rtc.ino` | แสดงเวลาจากโมดูล RTC บนจอ OLED |

---

## 🛠️ อุปกรณ์ที่ใช้บ่อย

- **Board:** Arduino UNO / ESP8266 (NodeMCU) / ESP32
- **Sensors:**
  - DHT11 (อุณหภูมิ/ความชื้น)
  - PIR Motion Sensor (HC-SR501)
  - Flame Sensor
- **Modules:**
  - Relay Module
  - RTC Module (DS1307 / DS3231)
  - OLED Display (SSD1306, I2C)
  - RGB LED
- **อื่นๆ:** ปั๊มน้ำ, สาย Jumper, Breadboard

---

## 📚 ไลบรารีที่ต้องติดตั้ง

ติดตั้งผ่าน **Arduino IDE → Library Manager** หรือ **PlatformIO**:

```text
DHT sensor library          (Adafruit)
Blynk                       (Volodymyr Shymanskyy)
Adafruit SSD1306
Adafruit GFX Library
RTClib                      (Adafruit)
```

---

## 🚀 วิธีการใช้งาน

1. **Clone repository**

   ```bash
   git clone https://github.com/<your-username>/<repo-name>.git
   ```

2. **เปิดไฟล์ `.ino`** ที่ต้องการใน Arduino IDE

3. **ตั้งค่า WiFi และ Blynk Token** (ถ้ามี)

   ```cpp
   char ssid[] = "YOUR_WIFI_SSID";
   char pass[] = "YOUR_WIFI_PASSWORD";
   char auth[] = "YOUR_BLYNK_TOKEN";
   ```

4. **เลือก Board และ Port** แล้วกด Upload

---

## 📁 โครงสร้างโปรเจกต์

```text
.
├── DHt11_nr/               # DHT11 sensor
├── pir_blynk/              # PIR + Blynk
├── pir_motion/             # PIR motion
├── pump/                   # Pump control
├── relay_blynk_control/    # Relay ผ่าน Blynk
├── rgb_light/              # RGB LED control
├── flame_ss.ino            # Flame sensor
├── oled_rtc.ino            # OLED + RTC
└── README.md
```

---

## ⚠️ หมายเหตุ

- ตรวจสอบ **แรงดันไฟ** ให้ถูกต้องก่อนต่อวงจร (โดยเฉพาะ Relay และปั๊มน้ำ)
- แนะนำให้ใช้ **External Power Supply** กับปั๊มน้ำ/โหลดกำลังสูง
- อย่าลืมใส่ **Blynk Auth Token** ของตัวเองก่อน Upload

---

## 👤 Author

**DHt11_nr**  
Simple Project Collection — Created 9 months ago

---

## 📄 License

โปรเจกต์นี้เผยแพร่เพื่อการศึกษา สามารถนำไปใช้และดัดแปลงได้อย่างอิสระ
