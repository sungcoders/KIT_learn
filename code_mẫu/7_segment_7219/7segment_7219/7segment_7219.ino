/*  module led matrix dùng ic max7219
 *  ic max7219 --> sữ dụng ledcontrol.h
 *      SƠ ĐỒ NỐI DÂY
 *    MATRIC        ARDUINO
 *     VCC            5V
 *     GND            GND
 *     DIN            12
 *     CLK            11
 *     CS             10
 *    chúc các bạn thành công
 *    
 *  NOTE : LedControl(DIN,CLK,CS,maxDevices);   // maxDevices là số lượng led matric mà bạn sữ dụng
 *         shutdown(int addr, bool status);     // hàm tắt hiển thị nếu: + status = true sẽ tắt hiển thị
 *                                                                       + status = flase bật hiển thị
 *                                                 addr: là địa chỉ ic max7219 nếu có 1 ic thì addr=0
 *         setIntensity(int addr, int intensity)   // chỉnh độ sáng led với intensity từ 0 -> 15
 *         clearDisplay(int addr)                  // xoá màn hình 
 *         setDigit(int addr, int digit, byte value, boolean dp)    // dùng để hiển thị số lên led  đoạn: + addr: địa chỉ ic max7219
 *                                                                                                        + digit: vị trí hiển thị trên led 7 đoạn
 *                                                                                                        + value: giá trị gì bạn muốn hiển thị
 *                                                                                                        + dp : có dấu chấm không: nếu 1 là ->chấm còn 0 là ->không chấm
 *         setChar(int addr, int digit, char value, boolean dp)     // dùng để hiển kí tự lên led 7 đoạn: giống như setDigit
 *                lưu ý : với setChar các kí tự được hổ trợ là : + từ "0" --> "9"
 *                                                               + các kí tự : 'A','b','c','d','E','F','H','L','P','.','-','_',' '
 *         addr là địa chỉ ic max7219 nếu 1 ic thì addr là 0
*/

#include <LedControl.h>
          LedControl segment = LedControl(12,11,10,1);

void setup() {
    segment.shutdown(0,false);
    segment.setIntensity(0,8);
    segment.clearDisplay(0);

}

void loop() {
    for(int i=0; i<=7; i++){
        segment.setDigit(0,i,i,0);
      }
      delay(1000);
    for(int i=0; i<=7;i++){
        segment.setChar(0,i,'7',0);
      }
      delay(1000);
}
