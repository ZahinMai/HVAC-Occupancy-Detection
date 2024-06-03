#include "DHT.h"
#define DHTPIN 2     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11

DHT dht(DHTPIN, DHTTYPE); // Initialize DHT sensor

// OLED
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>
#define i2c_Address 0x3c
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define OLED_RESET -1   // QT-PY / XIAO
Adafruit_SH1106G display = Adafruit_SH1106G(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(9600); // Set serial baud rate to 9600 bps
  dht.begin();

  delay(250); // Wait for the OLED to power up
  display.begin(i2c_Address, true); // Address 0x3C default
  delay(2000);

  // Clear the buffer.
  display.clearDisplay();
}

void printText(float h, float t, int val){
  display.setCursor(0, 0);
  display.println("Humidity: ");
  display.print(h);
  display.println("%");
  display.println("Temperature: ");
  display.print(t);
  display.println("°C");
  display.println("Gas: ");
  display.print(val);
  display.display();
}

void loop() {
  display.clearDisplay();

  delay(2000); // Wait a few seconds between measurements.

  // DHT11
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    Serial.println(F("Failed to read from DHT sensor!"));
      return;
  }

  Serial.print(F("Humidity: "));
  Serial.print(h);
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.print(F("°C "));

  // Gas sensor
  int val = analogRead(0); // Read Gas value from analog 0

  Serial.print(F(" Gas: "));
  Serial.println(val);

  printText(h, t, val);

  delay(500); // Update display every 500 ms
}
