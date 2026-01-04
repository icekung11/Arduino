#define sensor 12
int Sensor1;
void setup() {
 pinMode(sensor,INPUT);
 Serial.begin(9600);

}

void loop() {
 Sensor1 = digitalRead(sensor);
 Serial.println(Sensor1);
delay(1000);
}
