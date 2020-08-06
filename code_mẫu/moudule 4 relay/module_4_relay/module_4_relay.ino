/*
 * đây là code kích  hoặc kích on relay
 * có relay kích âm và kích dương !!!
 * => loại relay mình sử dụng ở đây là relay kích âm
 *    SƠ ĐỒ NỐI DÂY (MẪU)
 *    MODULE 4 RELAY             ARDUINO
 *          VCC                     5V
 *          GND                     GND
 *          IN1                     8
 *          IN2                     9
 *          IN3                     10
 *          IN4                     11
 *          chúc các bạn thành công !!!
 */

#define relay1 8               // định nghĩa relay1 chân số 8 của arduino
#define relay2 9
#define relay3 10
#define relay4 11

void setup() {  
  Serial.begin(9600);           // bật cổng serial của arduino với tốc độ bauld 9600
  pinMode(relay1,OUTPUT);       // chỉ định relay1 là tín hiệu ngỏ ra
  pinMode(relay2,OUTPUT);
  pinMode(relay3,OUTPUT);
  pinMode(relay4,OUTPUT);
}

void loop() {
                                     
  Serial.println("relay1 on  ");                    // hiện ra màn hình serial của arduino và xuống dòng
  digitalWrite(relay1,LOW);                         // thực hiện kích relay1 mức cao (relay kích âm)
  delay(5000);                                      // chờ 5000ms = 5s
  Serial.println("kích relay1 off   ");             // hiện ra màn hình serial của arduino và xuống dòng
  digitalWrite(relay1,HIGH);                        // thực hiện lệnh kích mức thấp cho relay1 (relay kích âm)
  delay(7000); 
  

  Serial.println("relay2 on  ");
  digitalWrite(relay2,LOW);
  delay(5000);
  Serial.println("kích relay2  off   ");
  digitalWrite(relay2,HIGH);
  delay(7000);
  

  Serial.println("relay3 on  ");
  digitalWrite(relay3,LOW);
  delay(5000);
  Serial.println("kích relay3  off   ");
  digitalWrite(relay3,HIGH);
  delay(7000);
  

  Serial.println("relay4 on  ");
  digitalWrite(relay4,LOW);
  delay(5000);
  Serial.println("kích relay4  off   ");
  digitalWrite(relay4,HIGH);
  delay(7000);
}
