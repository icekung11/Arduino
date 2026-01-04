const int blue = 11;
const int green = 10;
const int red = 9;
const int bright = 76;


void setup() {
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
}

void loop() {
 analogWrite(green,0);
 analogWrite(red,bright);
 analogWrite(blue,0);
 delay(800);
 analogWrite(green,bright);
 analogWrite(red,0);
 analogWrite(blue,0);
  delay(800);
 analogWrite(green,0);
 analogWrite(red,0);
 analogWrite(blue,bright);
  delay(800);
}
