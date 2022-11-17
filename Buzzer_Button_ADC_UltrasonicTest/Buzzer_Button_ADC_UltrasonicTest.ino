#define Buzzer 21
#define UserBtn 27
#define IR1 36
#define IR2 39
#define IR3 34
#define IR4 35
#define TRIG 32
#define ECHO 33
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(UserBtn,INPUT);
pinMode(Buzzer,OUTPUT);
pinMode(TRIG,OUTPUT);
pinMode(ECHO,INPUT);
pinMode(IR1,INPUT);
pinMode(IR2,INPUT);
pinMode(IR3,INPUT);
pinMode(IR4,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(Buzzer,1);
delay(10);
digitalWrite(Buzzer,0);
delay(100);
digitalWrite(TRIG,1);
Serial.print("ECHO:");Serial.print(digitalRead(ECHO));
digitalWrite(TRIG,0);
Serial.print("\t ECHO:");Serial.println(digitalRead(ECHO));
Serial.print("IR1:");
Serial.print(analogRead(IR1));Serial.print("\t IR2:");
Serial.print(analogRead(IR2));Serial.print("\t IR3:");
Serial.print(analogRead(IR3));Serial.print("\t IR4:");
Serial.print(analogRead(IR4));Serial.print("\t Btn:");
Serial.println(digitalRead(UserBtn));
}
