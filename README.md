# Sonoff-Arduino_IDE
This is just my small tweak to Theo Arends' excellent package.
Please see Theo's original package and original README for details:-
https://github.com/arendst/Sonoff-MQTT-OTA-Arduino

##What's this then?
This version simply adds .h files with function prototypes, as well as a minor pre-processor clause to reset the MQTT default parameters to Theo's recommended values without having to modify the actual library file.  This should be a simple, drop-in replacement which will compile for most people without any further changes.

All the mistakes are mine.  All of the brilliant, original work is Theo's.

###Updates..
I discovered a minor issue with my version where the "status 1" command would display data to the serial monitor, but would not publish to MQTT.  As a work-around for this, I've reduced the output of "serial 1" (which was very long) and added a couple of other, extra status command options.
- "status 3" now outputs MQTT status, including the updated MQTT_MAX_PACKET_SIZE and MQTT_KEEPALIVE settings.
- "status 4" now outputs the OTA status (which is currently limited to the OTA URL setting).
- 
In addition, the start-up text now also displays the MQTT_MAX_PACKET_SIZE and MQTT_KEEPALIVE in the serial monitor and publishes them to MQTT, too.

##In brief...
Theo Arends' replacement for the original Sonoff firmware.  Theo's version implements MQTT and OTA programming, as well as  versatile user interfaces (MQTT, serial console and button).

