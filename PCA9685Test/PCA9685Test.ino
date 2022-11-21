#include "Wire.h"
#include <Adafruit_PWMServoDriver.h>
#define SERVOMIN  150 // This is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  4000 // This is the 'maximum' pulse length count (out of 4096)
#define USMIN  600 // This is the rounded 'minimum' microsecond length based on the minimum pulse of 150
#define USMAX  2400 // This is the rounded 'maximum' microsecond length based on the maximum pulse of 600
#define SERVO_FREQ 50 // Analog servos run at ~50 Hz updates


TwoWire I2C = TwoWire(0);
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x40, I2C);
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);               // Begin Serial and Wire interfaces
I2C.begin(18,19,400000);
pwm.begin();
pwm.setOscillatorFrequency(27000000);
pwm.setPWMFreq(SERVO_FREQ);  // Set to whatever you like, we don't use it in this demo!
}
void TestGPIO(uint8_t pin)
{
  pwm.setPWMFreq(1000);
  for(uint16_t i=0;i<4095;i++)
  {
    pwm.setPWM(pin, i, 0); 
    delay(1);
  }
  for(uint16_t i=0;i<4095;i++)
  {
    pwm.setPWM(pin, 0, i); 
    delay(1);
  }
}
void TestServo(uint8_t servonum)
{
  for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
    pwm.setPWM(servonum, 0, pulselen);
  }

  delay(500);
  for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
    pwm.setPWM(servonum, 0, pulselen);
  }
}
void loop() {
  // put your main code here, to run repeatedly:
//  TestGPIO(0);
  TestServo(1);
  TestServo(2);
  TestServo(3);
  TestServo(4);
  TestServo(5);
  
  
}
