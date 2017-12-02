#include <LiquidCrystal.h> //Подключаем библиотеку для работы с LCD
LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2); // инициализируем LCD, указывая управляющие контакты

int input = A0;

void setup() {
    lcd.begin(16, 2);// задаем размерность дисплея
  pinMode(input, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  int pinValue = analogRead(input);
  
  if(pinValue > 0) {
    lcd.setCursor(0, 0);
    lcd.print("ZzZzZ..."); // выводим на дисплей традиционную фразу
    
  }
  else {
    lcd.print("qq"); // выводим на дисплей традиционную фразу
    
  }

  Serial.println(pinValue);
  
}

