# Test driver PCA9685
Thư viện cần include thêm để có thể sử dụng có thể tìm ở link sau https://github.com/adafruit/Adafruit-PWM-Servo-Driver-Library

Mặc định chân I2C được sử dụng trên ESP32 là 22,23. Trên mạch chân I2C được sử dụng là 18,19. Vì vậy cần phải mapping chân, sử dụng khung code sau:

```
#include "Wire.h"
#include <Adafruit_PWMServoDriver.h>
TwoWire I2C = TwoWire(0);
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x40, I2C);

void setup() {
I2C.begin(18,19,400000);
pwm.begin();
}
...
```
