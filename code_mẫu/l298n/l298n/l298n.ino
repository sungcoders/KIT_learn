/*  cách dùng l298n module dùng để điều khiển 2 motor quay thuận hay ngược lại
 *   VÍ DỤ : CÁCH NỐI DÂY
 *   BƯỚC 1: cấp nguồn l298n
 *    ARDUINO       L298N 
 *       GND         GND
 *     PIN 9V       L298N
 *       9V           +12V
 *       GND          GND     (NỐI GND CỦA PIN VÀ ARDUINO CHUNG NHÉ)
 *   BƯỚC 2: NỐI DÂY TÍN HIỆU
 *    ARDUINO        L298N
 *       4             IN1
 *       5             IN2
 *       6             IN3
 *       7             IN4
 *     xong rồi : chúc các bạn thành công !!
*/

#define IN1   4
#define IN2   5
#define IN3   6
#define IN4   7

void setup() {
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
}

void loop() {
  

}

void moto1_quay_thuan() {
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  }
void moto1_quay_nguoc() {
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  }
void moto2_quay_thuan() {
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  }
void moto1_quay_thuan() {
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  }
