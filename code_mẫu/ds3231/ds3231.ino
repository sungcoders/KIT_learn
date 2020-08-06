        /* đây là hàm đọc thời gian thực rtc ds3231 dùng thư viện RTClib và chuẩn i2c với thư viện wire
         *  daysOfTheWeek[7][12] --> tạo ra 1 mảng để lưu trử các giá trị thứ trong tuần
         *  RTC_DS3231 rtc đặt tên là rtc để gọi hàm đọc thời gian thực cho ds3231 có thể thay thế bằng từ khác
         *   SƠ ĐỒ NỐI DÂY
         *   Arduino        ds3231
         *      GND           GND
         *      5V            VCC
         *      SDA           20
         *      SCL           21
         *      chúc bạn thành công
        */  
#include <Wire.h>
#include "RTClib.h"
RTC_DS3231 rtc;
char daysOfTheWeek[7][12] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

void setup () {
  Serial.begin(9600);                        // bật cổng serial với bauld bằng 9600
  if (! rtc.begin()) {                       // kiểm tra ds3231 được kết nối với arduino không
      Serial.println("Couldn't find RTC");
      while(1);                              // khi không tìm thấy ds3231 được kết nối nó sẽ chờ ở đây (lặp vĩnh viễn)
      }
      rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));   // lấy thời gian từ máy tính
      rtc.adjust(DateTime(2014, 1, 21, 3, 0, 0));       // tự xét thời gian cho thời gian thực ds3231
}

void loop () {
   DateTime now = rtc.now();                  // hàm gọi trả về ngày và giờ hiện tại (phải gọi hàm này trước khi gọi các hàm bên dưới) 
   //  trả về hh:mm:ss = giờ phút giây
    Serial.print((String)now.hour() + ":" + (String)now.minute() + ":" + (String)now.second());
    Serial.println();                               // xuống dòng
   // trả về đ/mm/yy = ngày/tháng/năm
    Serial.print(daysOfTheWeek[now.dayOfTheWeek()]);
    Serial.print(",");
    Serial.print((String)now.day() + "/" + (String)now.month() + "/" + (String)now.year());
    Serial.println();                               // xuống dòng
    delay(1000);          chờ 1 giây (1s = 100ms)
}

/*  ghi chú : 
 *   + now.hour() dùng để trả về giờ hiện tại (không phải dạng chuổi)
 *   + (String)now.hour() dùng để ép now.hour() về dạng chuổi vì trong Serial.print() là các chuổi cộng lại với nhau
*/
