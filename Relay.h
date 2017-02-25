/*
  Relay.h - Library for relay simple control.
  Created by Diego Cruz
*/

#ifndef Relay_h
#define Relay_h

#include <Arduino.h>

class Relay
{
	public:
		Relay(int pin);
		void on();
		void off();
		void onDelay(byte t);
		void loop();
		boolean read();
	private:
		int _pin;
		byte _t;
		unsigned long _previousMillis = 0;
		byte _interval = 0;
};

#endif

