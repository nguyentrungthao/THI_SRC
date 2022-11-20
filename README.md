# THI_SRC
# Overview
This project contain code test board THI_SCR in inventhub link: https://inventhub.io/c/TrungThao1412/THI_SRC/tree/default

## Power 
- Input: 12VDC 
- Output: 
    + M1, M2: 12VDC
    + Servor x6: 5VDC
    + I2C: 3.3VDC
    + Analog line: 3.3VDC
    + Ultra sound: 5VDC
## Onboard Peripheral 
|Block                                  |component  |
|---------------------------------------|-----------|
|Buzzer                                 |KLJ-7525   |
|Output PWM expander,I2C conmunicate    |PCA9685    |
|H-Bridge                               |TB6612     |
|USB to UART                            |CP1202     |

## ESP32 pin assignment
|GPIO       |Function       |
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

## PCA pin assignment 
I2C address pin A0A1A2A3A4A5 = 000000
|PIN        |Connected      |
|-----------|---------------|
|LED0       |Servo 1        |
|LED1       |Servo 2        |
|LED2       |Servo 3        |
|LED3       |Servo 4        |
|LED4       |Servo 5        |
|LED5       |Servo 6        |


## Connector 
|Type       |Function                               |Decription |
|-----------|---------------------------------------|-----------|
|RJ11       |Servo, I2C, ANA_line, Ultra_sound      |6P6 and 6P4|
|Domino     |Output Supply power anh control Motor  |2.54mm     |
|jack DC    |Input Supply power board and Peripheral|12VDC      |
|USB type-C |USB code                               |           |


