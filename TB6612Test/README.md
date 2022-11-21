# Test driver TB6612
Code unit test chia thành 3 phần:
+ TestIN_pin: Xuất tín hiệu lần lượt ra 4 chân IN1,2,3,4 (dùng để kiểm tra kết nối chân của TB6612 trên oscilloscope )
+ TestEN12: Xuất tín hiệu PWM trên EN1 và EN2
+ TestTB6612Output: Test 2 ngõ ra PWM của TB6612, mỗi ngõ có mức PWM khác nhau, chạy đảo chiều 1s, ngừng trong 1s