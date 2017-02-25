#include <Relay.h>

Relay relay7(7);
Relay relay8(8);

void setup()
{
    // time in seconds
    relay7.onDelay(5);
}

void loop()
{
    // relay 8 power on
    relay8.on();
}

