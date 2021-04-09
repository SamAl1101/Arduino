const char pinRead = A0;
int a = 0;
int b = 0;
float T;
int q[2];
unsigned long Time;

void setup() {
pinMode(pinRead, INPUT);
Serial.begin(9600);
}

void loop() {

a = analogRead (pinRead);
 if (a<900) {
  Time = millis();
  q[0]=Time;

  while (a<900) {
    delay (10);
    a= analogRead(pinRead);
    }
  for (a; a>900;) {
    delay(10);
    a = analogRead (pinRead); 
  }
  Time = millis();
  q[1]=Time;

  T=2*(q[1]-q[0])/1000.;
  Serial.println(T);
 }

  
 /* a=analogRead(pinRead);
  b=analogRead(pinRead);
  c= abs(a-b);
for (c ; c<20;) {
  a = analogRead(pinRead);
  delay(100);
  b = analogRead(pinRead);
  delay(100);
  c = abs(a-b);
}
Serial.println("DIF");
Time = millis();
q[0]=Time;

a=analogRead(pinRead);
  b=analogRead(pinRead);
  c= abs(a-b);
  
for (c ; c<20;) {
  a = analogRead(pinRead);
  delay(100);
  b = analogRead(pinRead);
  delay(100);
  c = abs(a-b);
}
Serial.println("DIF_Mid");

a=analogRead(pinRead);
  b=analogRead(pinRead);
  c= abs(a-b);
  
for (c ; c<20;) {
  a = analogRead(pinRead);
  delay(100);
  b = analogRead(pinRead);
  delay(100);
  c = abs(a-b);
}
Serial.println("DIF_fin");
Time = millis();
q[1]=Time;

*/
}
