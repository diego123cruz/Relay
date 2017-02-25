/*
  Relay.h - Library for relay simple control.
  Created by Diego Cruz
*/

#ifndef Relay_h
#define Relay_h

#include "WProgram.h"

class Relay
{
  public:
    Relay(int pin);
    void on();
    void off();
    void onDelay(byte t);
    void offDelay(byte t);
  private:
    int _pin;
    byte _t;
};

#endif

