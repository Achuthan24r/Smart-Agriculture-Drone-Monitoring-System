#include "esp_camera.h"
#include <WiFi.h>
#include <HTTPClient.h>
#include <TinyGPS++.h>
#include <HardwareSerial.h>

// WiFi Credentials
const char* ssid = "YOUR_WIFI";
const char* password = "YOUR_PASSWORD";

// Server URL
const char* serverName = "http://YOUR_PC_IP:5000/upload";

// GPS
TinyGPSPlus gps;
HardwareSerial ss(1);

void setup() {
  Serial.begin(115200);
  ss.begin(9600, SERIAL_8N1, 16, 17); // RX, TX for GPS

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }

  camera_config_t config;
  config.ledc_channel = LEDC_CHANNEL_0;
  config.ledc_timer = LEDC_TIMER_0;
  config.pin_d0 = 5;
  config.pin_d1 = 18;
  config.pin_d2 = 19;
  config.pin_d3 = 21;
  config.pin_d4 = 36;
  config.pin_d5 = 39;
  config.pin_d6 = 34;
  config.pin_d7 = 35;
  config.pin_xclk = 0;
  config.pin_pclk = 22;
  config.pin_vsync = 25;
  config.pin_href = 23;
  c
