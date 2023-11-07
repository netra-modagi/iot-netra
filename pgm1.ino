//declaration
int led=LED_BUILTIN;
//setup
void setup(){
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}
//loop
void loop(){
  digitalWrite (led,HIGH);
  Serial.println("led is on");
  delay(2000);
  digitalWrite(led,LOW);
  Serial.println("led is off");
  delay(2000);

}
