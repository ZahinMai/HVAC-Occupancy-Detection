# Section 1 - Data collection
**Objective: Using an Arduino and UNO sensors, gather real time data on air quality factors (temperature, humidity, and CO<sub>2</sub>) in this room, and how they vary with the number of occupants in a room.**

An Arduino is a small microcontroller board that you can easily program to control electronic devices like lights, motors, and sensors.
It's commonly used for hobby projects and prototyping because it's affordable and user-friendly.

## 1. Setting up the hardware

**You should the following materials:**
- Arduino UNO
- Breadboard
- Jumper Wires
- DHT11 - This sensor is used to measure temperature and humidity
- Gas sensor
- Light sensor

**Connect your components as shown in the diagram below:**
![Circuit diagram](https://github.com/ZahinMai/HVAC-Occupancy-Detection/assets/87860518/2b128c4a-ce30-45fe-bb4e-883db9948f05)

## 2. Programming the components

**Example of the Arduino programming language**
``` C++
// This is an example of Arduino code
void setup() {
  // This is where you put setup code, which will run once
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // This is where your put your main code, to run repeatedly
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
```
---

To use the sensors in conjunction with the Arduino UNO, you will need to use the following code:
``` C++
#include "DHT.h"
#define DHTPIN 2     // Digital pin connected to the DHT sensor - ALTER THIS AS REQUIRED
#define DHTTYPE DHT11   // DHT11 library

DHT dht(DHTPIN, DHTTYPE); // Initialise DHT sensor

// OLED
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>

#define i2c_Address 0x3c
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define OLED_RESET -1   //   QT-PY / XIAO
Adafruit_SH1106G display = Adafruit_SH1106G(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);


void setup() {
  Serial.begin(9600); //Set serial baud rate to 9600 bps
  dht.begin();

  delay(250); // wait for the OLED to power up
  display.begin(i2c_Address, true); // Address 0x3C default

  delay(2000);
  display.clearDisplay();   // Clear the buffer.

}


void printText(float h, float t, int val) {
  display.setCursor(0, 0);
  display.println("Humidity: ");
  display.print(h);
  display.println("Temperature: ");
  display.print(t);
  display.println("Gas: ");
  display.print(val);
  display.display();
}


void loop() {
  display.begin(i2c_Address, true);
  display.clearDisplay();
  delay(2000); // Wait a few seconds between measurements.

  // DHT11
  // Reading temperature or humidity takes about 250 milliseconds; sensor readings may take up to 2 seconds to be read
  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();

  // Check if any reads failed and exit early (to try again)
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
  int val;
  val=analogRead(0); //Read Gas value from analogue 0
  delay(100);
  Serial.println("===========================================================");

  printText(h, t, val);
  display.display();
  delay(500);
  display.clearDisplay();
}
```
