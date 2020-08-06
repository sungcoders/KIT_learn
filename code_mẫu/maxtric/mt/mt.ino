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
 *         setRow(int addr, int row, byte value)   // cho sáng 1 hàng với addr nào và giá trị nào (nếu 1 sáng còn 0 tắt)
 *         addr là địa chỉ ic max7219 nếu 1 ic thì addr là 0
*/


#include <LedControl.h>
          LedControl mt = LedControl(12,11,10,1);        // khởi tạo biến mt thay cho ledcontrol 

void setup() {
    mt.shutdown(0,false);
    mt.setIntensity(0,8);
    mt.clearDisplay(0);
}

byte A[8] = {0x00,0x3F,0x7F,0xA4,0xA4,0x7F,0x3F,0x00 };  // A   + tạo 1 mảng gồm 8 cột (0x00 số thập lục phân )=(đổi nhị phân B00000000)
byte R[8] = {0x00,0x61,0x92,0x94,0x98,0xFF,0xFF,0x00 };  // R   + ví dụ : xem kĩ bên dưới
byte D[8] = {0x00,0x3C,0x7E,0x81,0x81,0xFF,0xFF,0x00 };  // D
byte U[8] = {0x00,0xFE,0xFF,0x01,0x01,0xFF,0xFE,0x00 };  // U
byte I[8] = {0x00,0x81,0x81,0xFF,0xFF,0x81,0x81,0x00 };  // I
byte N[8] = {0x00,0xFF,0x03,0x0C,0x30,0xC0,0xFF,0x00 };  // N
byte O[8] = {0x00,0x7E,0xFF,0x81,0x81,0xFF,0x7E,0x00 };  // O  

void A_ARDUINO() { for (int i=0 ; i<=7 ; i++) {mt.setRow(0,i,A[i]);}}   // chương trình con tên A_ARDUINO có chức năng hiển thị chữ A lên matrix
void R_ARDUINO() { for (int i=0 ; i<=7 ; i++) {mt.setRow(0,i,R[i]);}}   // dùng for để i thay đổi từ 0 đến 7
void D_ARDUINO() { for (int i=0 ; i<=7 ; i++) {mt.setRow(0,i,D[i]);}}
void U_ARDUINO() { for (int i=0 ; i<=7 ; i++) {mt.setRow(0,i,U[i]);}}
void I_ARDUINO() { for (int i=0 ; i<=7 ; i++) {mt.setRow(0,i,I[i]);}}
void N_ARDUINO() { for (int i=0 ; i<=7 ; i++) {mt.setRow(0,i,N[i]);}}
void O_ARDUINO() { for (int i=0 ; i<=7 ; i++) {mt.setRow(0,i,O[i]);}}

void loop() {
A_ARDUINO();          // gọi chương trình con hiển thị chử A trên led matrix
//delay(500);           // chờ 5ms (nữa giây)
//R_ARDUINO();
//delay(500);
//D_ARDUINO();
//delay(500);
//U_ARDUINO();
//delay(500);
//I_ARDUINO();
//delay(500);
//N_ARDUINO();
//delay(500);
//O_ARDUINO();
//delay(2000);
}
