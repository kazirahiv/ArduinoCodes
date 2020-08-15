#include <LiquidCrystal.h> 
int Contrast=75;
 byte slash[8]= { 
  B00000,  
  B00000,
  B00000,
  B00001,
  B00011,
  B00111,
  B01110,
  B11100,
};

 byte slashTwo[8]= { 
  B11100,  
  B01110,
  B00111,
  B00011,
  B00001,
  B00000,
  B00000,
  B00000,
};

byte slashThree[8] = {
  0b00110,
  0b01100,
  0b11001,
  0b10010,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte slashFour[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00010,
  0b11001,
  0b01100,
  0b00110
};

 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  

 void setup()
 {
    analogWrite(6,Contrast);
     lcd.begin(16, 2);
     lcd.createChar(7, slash);
     lcd.createChar(8,slashTwo); 
     lcd.createChar(9,slashThree);
     lcd.createChar(10,slashFour); 
  } 

  
void loop()
 { 
    lcd.setCursor(0, 0);
    lcd.write(7);
    lcd.setCursor(1, 0);
    lcd.write(9);
    
    lcd.setCursor(0, 2);
    lcd.write(8);
    
    lcd.setCursor(1, 2);
    lcd.write(10);
    
    lcd.setCursor(3, 0);
    lcd.print("Eid");
   
    lcd.setCursor(3, 2);
    lcd.print("Mubarak");
 }

