# **PART 1**
**Objective: Using an Arduino and sensors, gather real time data on air quality factors (temperature, humidity, and CO2) in this room, and how they vary with the number of occupants in a room.**

An Arduino is a small computer that you can easily program to control electronic devices like lights, motors, and sensors.
It's commonly used for hobby projects and prototyping because it's affordable and user-friendly.

# **1. Setting Up The Hardware**

**You should the following materials:**
- Arduino Uno:
- Breadboard:
- Jumper Wires:
- DHT11: For sensing temperature and humidity
- Gas Sensor:
- Light Sensor:

**Connect your components as shown in the diagram below:**
![Circuit diagram](https://github.com/ZahinMai/HVAC-Occupancy-Detection/assets/87860518/2b128c4a-ce30-45fe-bb4e-883db9948f05)

# **2. Programming the Components**

**How to use the Arduino IDE**
```arduino
// This is an example Arduino code
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
