const char pinRead = A0;
int a = 0;
int b = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(pinRead, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  a = analogRead(pinRead);
  Serial.println (a);
  delay(200);

}
