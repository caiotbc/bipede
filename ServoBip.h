#ifndef ServoBip_h
#define ServoBip_h

#include "Arduino.h"
#include "Servo.h"


class ServoBip
{
  public:
    ServoBip(int,int,int,int);
    void center();
    void mexe_servo(int);
    void test_range(int);
  private:
    Servo servo;
    int pwm_max;
    int pwm_min;
    int pwm_mid;
    int pin_id;
};

#endif
