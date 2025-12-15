#ifndef CONFIG_H
#define CONFIG_H

/* -------- WiFi Credentials -------- */
const char* WIFI_SSID     = "iPhone";
const char* WIFI_PASSWORD = "pavanshet11";

/* -------- MQTT Broker Details -------- */
const char* MQTT_BROKER = "172.20.10.2";
const uint16_t MQTT_PORT = 1883;

/* -------- MQTT Client Credentials -------- */
const char* MQTT_CLIENT_ID = "iotnode-01";
const char* MQTT_USERNAME  = "Aditya";
const char* MQTT_PASSWORD  = "Aditya";

/* -------- MQTT Topics -------- */
const char* MQTT_TOPIC_PUBLISH   = "cdac/diot/telemetry";
const char* MQTT_TOPIC_SUBSCRIBE = "cdac/diot/led/control";

/* -------- Custom MAC Address -------- */
const uint8_t NEW_MAC_ADDRESS[6] = {0xdc, 0x1b, 0xa1, 0x64, 0x5e, 0xbf};

#endif
