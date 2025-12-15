# MINI-PROJECT-ESP32-MQTT-USING-MOSQUITTO
This IoT mini project demonstrates remote device monitoring and control using standard IoT communication protocols. An ESP32 communicates over Wi-Fi and uses the MQTT publish–subscribe model to send telemetry data and receive control commands, enabling real-time LED control.
Step-by-Step Project Execution Flow


Step 1: Upload the Code

First, upload the ESP32 MQTT code provided in the repository using the Arduino IDE.

Step 2: Place the Configuration File

Place the config.h file in the same directory where the ESP32 MQTT source file (.ino) is located.

Step 3: Open the Configuration File

Open the config.h file to update the required configuration parameters.

Step 4: Configure Wi-Fi Credentials

In config.h, provide the Wi-Fi credentials:

Set WIFI_SSID to the Wi-Fi network or mobile hotspot name

Set WIFI_PASSWORD to the corresponding password

The Wi-Fi network must be the same for both the ESP32 and the laptop/PC.

Step 5: Establish Wi-Fi Connection

Using the provided Wi-Fi credentials, the ESP32 connects to the Wi-Fi network, which enables communication between the ESP32 and the laptop/PC.

Step 6: Configure MQTT Broker Details

In config.h, update the MQTT broker IP address using the IP address of the laptop/PC where the Mosquitto broker is running.

Step 7: Connect ESP32 to PC

Connect the ESP32 board to the laptop/PC using a USB cable.

Step 8: Select Board and Port

Select the appropriate ESP32 board and COM port in the Arduino IDE.

Step 9: Upload the Code to ESP32

Upload the code to the ESP32 after completing all configuration changes.

Step 10: Verify Serial Monitor Output

Open the Serial Monitor to verify:

Wi-Fi connection status

MQTT broker connection status

Step 11: Start MQTT Broker

Start the Mosquitto MQTT broker on the laptop/PC.

Step 12: Control and Monitor

Use MQTT commands:

mosquitto_sub to subscribe to telemetry data

mosquitto_pub to publish ON or OFF messages

The ESP32 receives MQTT messages, controls the LED accordingly, and publishes telemetry data.

Final Result

The ESP32 successfully communicates over Wi-Fi, connects to the MQTT broker, publishes telemetry data, and performs LED control based on received MQTT commands.
