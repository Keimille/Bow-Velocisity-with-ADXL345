# ADXL345-Output-and-Calculations
ADXL345 Calibration and Ouput

## Install Driver for Board
I am using the [ELEGOO NANO](https://www.elegoo.com/download/)

## Install Library
- Download the [Adafruit_Sensor.h](https://github.com/adafruit/Adafruit_Sensor/blob/master/Adafruit_Sensor.h) and the [Adafruit_ADXL345_U.h](https://github.com/adafruit/Adafruit_ADXL345/blob/master/Adafruit_ADXL345_U.h) libraries.
- Add libraries to your Arduino library folder and include in the sketch 

## Nano and ADXL Pin Chart

| Arduino Pin | ADXL345 Pin |
| ----------- | ----------- |
| GND         | GND         |
| 3V3         | VCC         |
| 3V3         | CS          |
| GND         | SDO         |
| A4          | SDA         |
