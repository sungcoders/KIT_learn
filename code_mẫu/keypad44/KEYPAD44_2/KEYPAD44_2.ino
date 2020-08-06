
const int col1 = 5;
const int col2 = 4;
const int col3 = 3;
const int col4 = 2;

const int row1 = 6;
const int row2 = 7;
const int row3 = 8;
const int row4 = 9;

void setup() {
    Serial.begin(9600);
    pinMode(row1, OUTPUT);
    pinMode(row2, OUTPUT);
    pinMode(row3, OUTPUT);
    pinMode(row4, OUTPUT);

    pinMode(col1, INPUT_PULLUP);
    pinMode(col2, INPUT_PULLUP);
    pinMode(col3, INPUT_PULLUP);
    pinMode(col4, INPUT_PULLUP);
}

void loop() {
    Serial.println(keypad44());
}

int keypad44(void) {
    digitalWrite(row1,LOW);
    digitalWrite(row2,HIGH);
    digitalWrite(row3,HIGH);
    digitalWrite(row4,HIGH);
    delay(16);
    if(digitalRead(col1)==LOW)        return 1;
    else if(digitalRead(col2)==LOW)   return 2;
    else if(digitalRead(col3)==LOW)   return 3;
    else if(digitalRead(col4)==LOW)   return 4;  
    delay(16);
    digitalWrite(row1,HIGH);
    digitalWrite(row2,LOW);
    digitalWrite(row3,HIGH);
    digitalWrite(row4,HIGH);
    delay(10);
    if(digitalRead(col1)==LOW)        return 5;
    else if(digitalRead(col2)==LOW)   return 6;
    else if(digitalRead(col3)==LOW)   return 7;
    else if(digitalRead(col4)==LOW)   return 8;    
    delay(16);
    digitalWrite(row1,HIGH);
    digitalWrite(row2,HIGH);
    digitalWrite(row3,LOW);
    digitalWrite(row4,HIGH);  
    delay(16);
    if(digitalRead(col1)==LOW)        return 9;
    else if(digitalRead(col2)==LOW)   return 10;
    else if(digitalRead(col3)==LOW)   return 11;
    else if(digitalRead(col4)==LOW)   return 12;
    delay(16);
    digitalWrite(row1,HIGH);
    digitalWrite(row2,HIGH);
    digitalWrite(row3,HIGH);
    digitalWrite(row4,LOW);  
    delay(16);
    if(digitalRead(col1)==LOW)        return 13;
    else if(digitalRead(col2)==LOW)   return 14;
    else if(digitalRead(col3)==LOW)   return 15;
    else if(digitalRead(col4)==LOW)   return 16;
    delay(16);
    return 0;
  }
