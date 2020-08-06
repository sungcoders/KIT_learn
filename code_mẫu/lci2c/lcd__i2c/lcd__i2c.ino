  /* các bạn chú ý nên tải thư viện lcd i2c chuẩn để tránh bị lỗi
   *  SƠ ĐỒ NỐI DÂY
   *      ARDUINO               LCD I2C
   *         5V                  VCC
   *         GND                  GND
   *         20                   SDA
   *         21                   SCL
   *         chúc các bạn thành công
  */    

#include <LiquidCrystal_I2C.h>      // khai báo thư viện lcd i2c
LiquidCrystal_I2C lcd(0x27, 16, 2); // địa chỉ lcd 0x27 hoặc 0x3F, dạng lcd 2 hàng mỗi hàng 16 ô

void setup()
{
	lcd.begin();                    // khởi tạo lcd hoặc dùng lcd.init();
	lcd.backlight();                // bật đèn nền lcd
	lcd.print("Hello, world!");     // in ra màn hình lcd : hello, World!
  lcd.setCursor(0,1);             // cho lcd in ra màn hình tại vị trí hàng 2 vị trí 0
  lcd.print("chao ban");
  delay(5000);                    // chờ 5000ms = 5s
  lcd.clear();                    // xoá màn hình lcd
  lcd.print("good luck");
}

void loop()
{}
