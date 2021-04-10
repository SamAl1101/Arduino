#define FB 3
#define SB 6
#define FLED 10
#define SLED 11
int ModeSw=0;

void setup() {
pinMode(FB, INPUT);
pinMode(SB, INPUT);
pinMode(FLED, OUTPUT);
pinMode(SLED, OUTPUT);
Serial.begin(9600);

digitalWrite(FLED, LOW);
digitalWrite(SLED, LOW);

}

void loop() {

 if(ModeSw == 0){
  digitalWrite(FLED, HIGH);
  digitalWrite(SLED, LOW);
 }
 else {
   digitalWrite(FLED, LOW);
  digitalWrite(SLED, HIGH);
 }
 if (digitalRead(FB)==LOW){
  ModeSw=0;
 }
 if (digitalRead(SB)== LOW) {
    ModeSw=1;
 }
}
