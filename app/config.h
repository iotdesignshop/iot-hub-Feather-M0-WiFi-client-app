// Physical device information for board and sensor
#ifdef ARDUINO_SAMD_FEATHER_M0
#define DEVICE_ID "Feather M0 WiFi"
#else
#define DEVICE_ID "Arduino MKR1000"
#endif

// Pin layout configuration
#define LED_PIN 13
#define BME_CS 5

// Interval time(ms) for sending message to IoT Hub
#define INTERVAL 30000    // 30 Seconds

// If don't have a physical DHT sensor, can send simulated data to IoT hub
#define SIMULATED_DATA true

#define TEMPERATURE_ALERT 30

// SSID and SSID password's length should < 32 bytes
// http://serverfault.com/a/45509
#define SSID_LEN 32
#define PASS_LEN 32
#define CONNECTION_STRING_LEN 256

#define MESSAGE_MAX_LEN 256

#define WINC_EN 2
#define WINC_CS 8
#define WINC_IRQ 7
#define WINC_RST 4
