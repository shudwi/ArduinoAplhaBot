#ifndef Ultrasound_h
#define Ultrasound_h

#include <Arduino.h>
#include <Servo.h>

class Ultrasound
{
  public:
    Ultrasound(int pin, int servo_pin);
    void sweep(int distances[], int from, int to);
    unsigned long ping();
    void lookAt(int position);
  private:
    int _pin;
    Servo _servo;
};

#endif