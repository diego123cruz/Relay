/*
  Relay.cpp - Library for relay simple control.
  Created by Diego Cruz
*/

#include "WProgram.h"
#include "Relay.h"

Relay::Relay(int pin)
{
    pinMode(pin, OUTPUT);
    _pin = pin;
}

void Relay::on()
{
  digitalWrite(_pin, HIGH);
}

void Relay::off()
{
  digitalWrite(_pin, LOW);
}

void Relay::onDelay(byte t)
{
    digitalWrite(_pin, HIGH);
    delay(t);
    digitalWrite(_pin, LOW);
}

void Relay::offDelay(byte t)
{
    digitalWrite(_pin, LOW);
    delay(t);
    digitalWrite(_pin, HIGH);
}

