#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

#include <MeMCore.h>

MeDCMotor motor_9(9);
MeDCMotor motor_10(10);
void move(int direction, int speed)
{
      int leftSpeed = 0;
      int rightSpeed = 0;
      if(direction == 1){
          leftSpeed = speed;
          rightSpeed = speed;
      }else if(direction == 2){
          leftSpeed = -speed;
          rightSpeed = -speed;
      }else if(direction == 3){
          leftSpeed = -speed;
          rightSpeed = speed;
      }else if(direction == 4){
          leftSpeed = speed;
          rightSpeed = -speed;
      }
      motor_9.run((9)==M1?-(leftSpeed):(leftSpeed));
      motor_10.run((10)==M1?-(rightSpeed):(rightSpeed));
}
double angle_rad = PI/180.0;
double angle_deg = 180.0/PI;
MeRGBLed rgbled_7(7, 7==7?2:4);

void setup(){
    for(int __i__=0;__i__<10;++__i__)
    {
        rgbled_7.setColor(2,255,0,0);
        rgbled_7.show();
        rgbled_7.setColor(1,0,255,0);
        rgbled_7.show();
        _delay(1);
        rgbled_7.setColor(2,0,0,255);
        rgbled_7.show();
        rgbled_7.setColor(1,255,150,150);
        rgbled_7.show();
        _delay(1);
        rgbled_7.setColor(2,255,0,255);
        rgbled_7.show();
        rgbled_7.setColor(1,255,255,60);
        rgbled_7.show();
        _delay(1);
    }
    rgbled_7.setColor(0,0,0,0);
    rgbled_7.show();
}

void loop(){
    _loop();
}

void _delay(float seconds){
    long endTime = millis() + seconds * 1000;
    while(millis() < endTime)_loop();
}

void _loop(){
}
