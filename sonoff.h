/*
 * $Id: sonoff.h,v 1.1 2016/04/04 14:45:06 anoncvs Exp $
 *
 * Sonoff Arduino implementation by Theo Arends
 */

/*
 * Function prototypes.
 */
void mqtt_reconnect();
void send_power();
void send_heartbeat();
void stateloop();
void serial();
void setup();
void loop();

#define REL_PIN             12           // GPIO 12 = Red Led and Relay (0 = Off, 1 = On)
#define LED_PIN             13           // GPIO 13 = Green Led (0 = On, 1 = Off) - Sonoff
#define KEY_PIN             0            // GPIO 00 = Button

#define PRESSED             0
#define NOT_PRESSED         1

#define SERIAL_IO                        // Enable serial command line.
#define STATES              10           // Loops per second.

#ifdef DEBUG_ESP_PORT
#define DEBUG_MSG(...) DEBUG_ESP_PORT.printf( __VA_ARGS__ )
#else
#define DEBUG_MSG(...) 
#endif

#define WIFI_STATUS         0
#define WIFI_SMARTCONFIG    1
