byte push=3, led=4;
void setup() {
pinMode(push, INPUT);
pinMode(led, OUTPUT);
}

void loop() {
if(push==HIGH){
  digitalWrite(led, HIGH);
  delay(1500);
  digitalWrite(led, LOW);
  delay_(2000);
  }
}
