#include <LiquidCrystal.h> //Подключаем библиотеку для работы с LCD
  byte slash[8]= { // Array of bytes
  B00000,  // B stands for binary formatter and the 5 numbers are the pixels
  B00000,
  B00010,
  B00101,
  B00100,
  B01000,
  B01000,
  B10000,
};
byte wave[8]= { // Array of bytes
  B00000,  // B stands for binary formatter and the 5 numbers are the pixels
  B00000,
  B00010,
  B00101,
  B00100,
  B01000,
  B01000,
  B10000,
};
LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2); // инициализируем LCD, указывая управляющие контакты
void setup() { 
  lcd.begin(16,2); // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display
  lcd.createChar(7, slash); // Create a custom character for use on the LCD. Up to eight characters of 5x8 pixels are supported
  lcd.createChar(8, wave);
}
void loop() { 
  for(int j=0;j<=15;j++) {
    lcd.setCursor(j,0); // Sets the location at which subsequent text written to the LCD will be displayed
    lcd.write(8); // Writes a character to the LCD
    delay(100); // 1 second delay
    lcd.clear(); // Write a character to the LCD
  }
  for(int i=0;i<=15;i++) {
    lcd.setCursor(i,0); // Sets the location at which subsequent text written to the LCD will be displayed
    lcd.write(7); // Writes a character to the LCD
    delay(100); // 1 second delay
    lcd.clear(); // Write a character to the LCD
  }
}
