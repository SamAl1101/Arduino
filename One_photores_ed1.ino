const char pinRead = A0;
int a = 0;
float b = 0;
float T[2];
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

  T[0]=2*(q[1]-q[0])/1000.;
  
  for (a; a>900;) {
    delay(10);
    a = analogRead (pinRead); 
  }
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

  T[1]=2*(q[1]-q[0])/1000.;
    }
    b=(T[0]+T[1])/2;
  Serial.println(b);
 }

}
