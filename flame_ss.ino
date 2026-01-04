#define sensor D2

void setup() {
 pinMode(sensor,INPUT);
  Serial.begin(9600);
}

void loop() {
  int SensorV = digitalRead(sensor);
  if(SensorV == LOW){  
    Serial.println("พบไฟ");
  }
 else{
    Serial.println("ไม่พบไฟ");
  
  }



}
