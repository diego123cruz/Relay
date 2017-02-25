#include <Relay.h>

Relay relay7(7);
Relay relay8(8);

void setup()
{
	Serial.begin(9600);
    // time in seconds
	relay7.onDelay(5);
}

void loop()
{
	Serial.println(relay7.read());

	// relay 7 loop
	relay7.loop();

	// relay 8 power on
	relay8.on();
	delay(300);
	relay8.off();
	delay(200);
}

