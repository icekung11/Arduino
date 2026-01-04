const int sensor = 2;
const int relay = 3;

void setup() {
  pinMode(sensor,INPUT);  // put your setup code here, to run once:
  pinMode(relay,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorvalue = digitalRead(sensor);
 
  Serial.println(sensorvalue);// put your main code here, to run repeatedly:
  if(sensorvalue == LOW){
    digitalWrite(relay,HIGH);
    Serial.print("Pump on");
  }
  else{
    digitalWrite(relay,LOW);
    Serial.print("Pump off");
  }
}
