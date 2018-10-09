#include <M5Stack.h>

#include "fonts/RobotoR12pt8b.h" 
#define F_RR12 &RobotoR12pt8b 

void setup() {
  M5.begin();
  M5.Lcd.setTextDatum(TL_DATUM);
  M5.Lcd.setBrightness(100); //0-255
  M5.Lcd.setTextColor(TFT_GREEN);
  M5.Lcd.setFont(F_RR12); 
  M5.Lcd.drawString(utf8rus("Привет"), 10, 200, 1);
}
void loop() {
}
