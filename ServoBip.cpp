#include "Arduino.h"
#include "ServoBip.h"
#include "Servo.h"

ServoBip::ServoBip(int pin,int p_min,int p_max,int p_med)
{
  servo.attach(pin);
  pwm_max = p_max;
  pwm_min = p_min;
  pwm_mid = p_med;
}

void ServoBip::center()
{
  servo.write(pwm_mid);
}

void ServoBip::mexe_servo(int value)
{
  servo.write(value);
}

void ServoBip::test_range(int veloc)
{
  for(int i=0;i<180;i++)
  {
    servo.write(i);
    delay(veloc);
  }
  for(int i=180;i>0;i--)
  {
    servo.write(i);
    delay(veloc);
  }
}
