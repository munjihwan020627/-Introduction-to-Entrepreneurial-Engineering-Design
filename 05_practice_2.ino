#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(7, OUTPUT);
  digitalWrite(7, LOW);
  delay(1000);
}
void loop(){
  int count = 0;
  while (count< 5){
  digitalWrite(7, HIGH);
  delay(100);
  digitalWrite(7, LOW);
  delay(100);
  count += 1;
  }
  while(1){
   digitalWrite(7,HIGH);
  }
}
