# BRAKEPAD_THICKNESS_GAUGE
## Description
A  Brakepad Thickness Guage is  Smart  system which uses the ultrasonic sensor to measure the Brakepad thickness.This system helps the automobile from accidents.The thickness of the brake pads are displayed on the display that allowing driver to quickly check  the thickness of brake pad material.This system can provide a warning to the driver if the thickness reduces dramatically.

* Ultrasonic sensor used for  measuring the thickness of  pads(i.e distance between the pads)
## Features
* Measure the thickness of the brake pads.
* Displays the distance between the two brake pads in the lcd dsplay
* Warning if the pads thickness is less than the threeshold

## Components Required

* STM32F407 micro-controller
* HC SR04 Ultrasonic sensor
* Connecting wires
* LCD display
* led 
* Bread board


## HC SR04 - Ultrasonic sensor
### What is Ultrasound?
Ultrasound is high-pitched sound waves with frequencies higher than the audible limit of human hearing.

### Ultrasonic Frequency Range Spectrum
Human ears can hear sound waves that vibrate in the range from about 20 times a second (a deep rumbling noise) to about 20,000 times a second (a high-pitched whistling). However, ultrasound has a frequency of over 20,000 Hz and is therefore inaudible to humans.

### HC-SR04 Hardware Overview
At its core, the HC-SR04 Ultrasonic distance sensor consists of two ultrasonic transducers. The one acts as a transmitter which converts electrical signal into 40 KHz ultrasonic sound pulses. The receiver listens for the transmitted pulses. If it receives them it produces an output pulse whose width can be used to determine the distance the pulse travelled. As simple as pie!

The sensor is small, easy to use in any robotics project and offers excellent non-contact range detection between 2 cm to 400 cm (that’s about an inch to 13 feet) with an accuracy of 3mm. Since it operates on 5 volts, it can be hooked directly to an Arduino or any other 5V logic microcontrollers.
Spec|Range|
|-|-|
Operating Voltage	|DC 5V|
Operating Current |15mA| 
Operating Frequency	|40KHz| 
Max Range	|4m| 
Min Range	|2cm| 
Ranging Accuracy |3mm|
Measuring Angle	|15 degree| 
Trigger Input Signal |10µS TTL pulse|
Dimension	|45 x 20 x 15mm|

### How Does HC-SR04 Ultrasonic Distance Sensor Work?
It all starts, when a pulse of at least 10 µS (10 microseconds) in duration is applied to the Trigger pin. In response to that the sensor transmits a sonic burst of eight pulses at 40 KHz. This 8-pulse pattern makes the “ultrasonic signature” from the device unique, allowing the receiver to differentiate the transmitted pattern from the ambient ultrasonic noise.



## 3. High Level Requirements
|ID|Description|
|------|------|
|HLR_01|    |
|HLR_02|    |
|HLR_03|    |
|HLR_04|    |
|HLR_05|    |

## 4. Low Level Requirements
|ID|ID|Description|
|------|------|------|
|HLR_01|LLR_01|     |
||LLR_02|       |
|HLR_02|LLR_01|     |       
||LLR_02|       |
|HLR_03|LLR_01|     |              
||LLR_02|       |
|HLR_04|LLR_01|     |              
||LLR_02|       |
|HLR_05|LLR_01|     |              
||LLR_02|       |





