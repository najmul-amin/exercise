void setup() {
    // put your setup code here, to run once:
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  }
  
  void loop() {
    // put your main code here, to run repeatedly:
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  delay(500);
  }