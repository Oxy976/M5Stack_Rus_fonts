#include <M5Stack.h>

#include "Fonts/RobotoR12pt8b.h"
#define F_RR12 &RobotoR12pt8b

void setup() {
  Serial.begin(115200);
  M5.begin();
  M5.Lcd.setTextDatum(TL_DATUM);
  M5.Lcd.setBrightness(100); //0-255
  M5.Lcd.setCursor(0, 20);
  M5.Lcd.setTextColor(TFT_GREEN);
  M5.Lcd.setFont(F_RR12);
  for (int i = 32; i <= 255; i++) {
    M5.Lcd.print(char(i));
  }
}

void loop() {
}
