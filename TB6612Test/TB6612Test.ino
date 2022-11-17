#define IN1 4
#define IN2 2
#define IN3 17
#define IN4 5
#define EN1 23
#define EN2 22

void setup() {
  // put your setup code here, to run once:
pinMode(IN1,OUTPUT);
pinMode(IN2,OUTPUT);
pinMode(IN3,OUTPUT);
pinMode(IN4,OUTPUT);
pinMode(EN1,OUTPUT);
pinMode(EN2,OUTPUT);
}
void TestIN_pin()
{
  digitalWrite(IN1,1);
  delay(10);
  digitalWrite(IN1,0);
  digitalWrite(IN2,1);
  delay(20);
  digitalWrite(IN2,0);
  digitalWrite(IN3,1);
  delay(30);
  digitalWrite(IN3,0);
  digitalWrite(IN4,1);
  delay(40);
  digitalWrite(IN4,0);
}
void TestEN12()
{
  analogWrite(EN1,200);
  analogWrite(EN2,50);
}
void TestTB6612Output()
{
  digitalWrite(IN1,1);
  digitalWrite(IN2,0);
  digitalWrite(IN3,1);
  digitalWrite(IN4,0);
  analogWrite(EN1,200);
  analogWrite(EN2,50);
}
void loop() {
  // put your main code here, to run repeatedly:
//  TestIN_pin();
//  TestEN12();
TestTB6612Output();
}
