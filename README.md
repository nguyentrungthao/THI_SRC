# THI_SRC
## Overview

## Hardware design
Hardware design can be found at Inventhub link: https://inventhub.io/c/TrungThao1412/THI_SRC/tree/default
## Input and Output 
- Input:  
    - Jack DC power: 12V
    - USB-C power: 5V
    - UserButton.
    - 4 analog lines to ESP32
    - ECHO pin of Ultrasonic sensor
- Output: 
    - 2 Motor output M1, M2.
    - 6 output of servo motors
    - Matrix LED
    - TRIG pin of Ultrasonic sensor
    - TX, RX red LED
    - 12V red LED indicating
    - 5V red LED indicating

## ESP32 pin assignment
|GPIO       |Assignment     |
|-----------|---------------|
|IO23       |PWMA - TB6612  |
|IO22       |PWMB - TB6612  |
|IO4        |AIN1 - TB6612  |
|IO2        |AIN2 - TB6612  |
|IO17       |BIN1 - TB6612  |
|IO5        |BIN2 - TB6612  |
|IO21       |BUZZER         |
|IO27       |USER BUTTON    |
|SENSOR_VP  |ADC1           |
|SENSOR_VN  |ADC2           |
|IO34       |ADC3           |
|IO35       |ADC4           |
|IO18       |SDA            |
|IO19       |SCL            |
|IO13       |MOSI           |
|IO15       |CS             |
|IO14       |SCK            |
## Connector 
|Type           |Function                               |Decription                     |
|-----------    |---------------------------------------|-----------                    |
|RJ11 6P6       |ANALOG_lines                           |1:GND; 2-5:ANA4-ANA1; 6:5VDC   |
|RJ11 6P4 x6    |Servo                                  |1:GND; 2:5VDC; 3:PWM;  4:NC    |
|RJ11 6P4       |I2C port output                        |1:GND; 2:SDA;  3:SCL;  4:3.3V  |
|RJ11 6P4       |Ultrasonic sensor port                 |1:GND; 2:ECHO; 3:TRIG; 4:5V    |
|Jack DC        |Input Power supply                     |12VDC                          |
|USB type-C     |5V power supply and communication with PC                               |                               |
|Arduino pins   |


