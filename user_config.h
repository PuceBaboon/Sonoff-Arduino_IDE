/*
 * $Id: user_config.h,v 1.2 2016/04/06 05:12:13 anoncvs Exp $
 *
 * Sonoff Arduino implementation by Theo Arends
 */

/* 
 * PROJECT is used as the default topic delimiter. The group topic
 * delimiter is this word + "s".
 */
#define PROJECT             "sonoff"

#define VERSION             "1.0.5"
#define CFG_HOLDER          0x20160309	// Change this value to load default configurations.


// Wifi
#define STA_SSID            "YOUR-SSID-HERE"
#define STA_PASS            "YOUR-PASSWD-HERE"
#define WIFI_HOSTNAME       "ESP-%06X-%s"


// Ota
#define OTA_URL             "http://YOUR-HOST.AND.DOMAIN:80/api/arduino/"PROJECT".cpp.bin"


// MQTT
#define MQTT_HOST           "YOUR-MQTT-HOST.AND.DOMAIN"
#define MQTT_PORT           1883

#define MQTT_CLIENT_ID      "DVES_%06X"	// Also fall back topic using Chip Id = last 6 characters of MAC address.
#define MQTT_USER           "DVES_USER"
#define MQTT_PASS           "DVES_PASS"

#define SUB_PREFIX          "cmnd"	// Sonoff devices subscribe to:- cmnd/MQTT_TOPIC and cmnd/MQTT_GRPTOPIC.
#define PUB_PREFIX          "stat"	// They publish to:- stat/MQTT_TOPIC.
#define MQTT_TOPIC          PROJECT
#define MQTT_GRPTOPIC       PROJECT"s"	// Group topic.


// Application
#define MQTT_SUBTOPIC       "POWER"
#define APP_TIMEZONE        9		// +9 hours (Tokyo).
#define APP_POWER           0		// Saved power state Off.
