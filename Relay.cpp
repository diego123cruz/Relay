/*
  Relay.cpp - Library for relay simple control.
  Created by Diego Cruz
*/
#include <Arduino.h>
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
	_previousMillis = millis();
	_interval = t;
}

void Relay::loop()
{
	unsigned long currentMillis = millis();

	if (currentMillis - _previousMillis >= (_interval*1000) ) 
	{
		_previousMillis = currentMillis;
		digitalWrite(_pin, LOW);
	}
}

boolean Relay::read()
{
	return digitalRead(_pin);
}

