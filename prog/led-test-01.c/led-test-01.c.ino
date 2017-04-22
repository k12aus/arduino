#include <MeMCore.h>

MeRGBLed led(0, 30);
int delay_time = 1500;
void setup()
{
  led.setpin(13);
}

void loop()
{
  led.setColor(60, 60, 60); //Set both LED to White
  led.show();                  //Must use .show() to make new colour take effect.
  delay(delay_time);

  led.setColorAt(0, 0, 255, 0); //Set LED0 (RGBLED1) (RightSide) to green
  led.setColorAt(1, 0, 0, 255); //Set LED1 (RGBLED2) (LeftSide)  to Blue
  led.show();
  delay(delay_time);

  led.setColorAt(0, 0, 0, 255); //Set LED0 (RGBLED1) (RightSide) to Blue
  led.setColorAt(1, 0, 255, 0); //Set LED1 (RGBLED2) (LeftSide)  to green
  led.show();
  delay(delay_time);
  
  led.setColorAt(0, 0, 0, 255); //Set LED0 (RGBLED1) (RightSide) to Blue
  led.setColorAt(1, 0, 0, 255); //Set LED1 (RGBLED2) (LeftSide)  to Blue
  led.show();
  delay(delay_time);

    led.setColorAt(0, 0, 255, 0); //Set LED0 (RGBLED1) (RightSide) to green
  led.setColorAt(1, 0, 0, 255); //Set LED1 (RGBLED2) (LeftSide)  to Blue
  led.show();
  delay(delay_time);

  led.setColorAt(0, 0, 0, 255); //Set LED0 (RGBLED1) (RightSide) to Blue
  led.setColorAt(1, 0, 255, 0); //Set LED1 (RGBLED2) (LeftSide)  to green
  led.show();
  delay(delay_time);
}

