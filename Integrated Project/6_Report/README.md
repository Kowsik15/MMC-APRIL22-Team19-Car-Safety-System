# Car Safety System

## Description
An automatic braking system is an important part of safety technology for automobiles. It is an advanced system, specifically designed to either prevent possible collision, or reduce speed of the moving vehicle, prior to a collision with another vehicle, pedestrian or an obstacle of some sort.

These systems combine sensors, such as Ldr, infrared or ultrasonic to scan for possible objects in front of the vehicle, and then use brake control to prevent collision if the object is, in fact, detected.

A Brakepad Thickness Guage is Smart system which uses the ultrasonic sensor to measure the Brakepad thickness.This system helps the automobile from accidents.The thickness of the brake pads are displayed on the display that allowing driver to quickly check the thickness of brake pad material.This system can provide a warning to the driver if the thickness reduces dramatically.

Ultrasonic sensor used for measuring the thickness of pads(i.e distance between the pads
Automatic brakes are one of many car safety features, and are often integrated with other technology, such as pre-collision systems and adaptive cruise control.

Even though each car manufacturer has its own technology when it comes to automatic braking systems, they all use sensory input as a starting point. Depending on the manufacturer, a system uses sensors such as laser, radar, or even video data, to determine if there are any objects in front of the vehicle. For example, the system monitors traffic in front of the vehicle and assesses the possibility of a collision.

If an object is detected, the system continues with direct measurement of sensor data. It determines the distance between the moving vehicle and the object in front of it, and assesses their relative speed, as well. If the system concludes that there is a significant speed difference, i.e. the speed of the vehicle is greater than the speed of the object on its path, it can automatically activate the brakes, in an attempt to prevent the possible collision.

As previously mentioned, each manufacturer uses its own automatic braking system technology, with different sensory input and setup.

Subaru's EyeSight system, for example, uses video input, in the form of two color cameras, mounted at the top of the windshield, to look for contrast with the background and vertical surfaces when scanning the area. The software is then able to recognize different types of images, like pedestrians, motorcycles, and rear ends of other vehicles.

Volvo's City Safety System, on the other hand, uses a combination of a lidar (laser radar), placed in the bumper, and a camera, mounted in the windshield. Lidar can see several hundred yards in front of the car, but it can't determine what it's seeing. That's where the camera steps in, identifying the object and determining if it is a possible problem or not.

Honda's City Brake Active System combines radar sensors and cameras, using the data to determine any possible collision, and warn the driver through the series of visual and audible alerts. If the driver ignores the warnings, the system can take over and automatically apply the brakes. Honda's system can detect pedestrians and slow the vehicle down or stop it entirely if there is a chance of pedestrians being hit.

A Collision Avoidance System is an advanced driver assistance system designed to prevent or reduce the severity of a collision. In its basic form, a forward collision warning system monitors a vehicle's speed, and the distance between the vehicles, so that it can provide a warning to the driver if the vehicles get too close, potentially helping to avoid a crash.Our project invloves two type of collision avoiding system they are

LDR based i.e light based
Ultrasonic based i.e distance based


## Features
* Measure the thickness of the brake pads.
* Displays the distance between the two brake pads in the lcd dsplay
* Warning if the pads thickness is less than the threeshold
* Ultrasonic sensors is used to measure the distance between the vehicles
* LDR is used to measure the light intensity and accordingly controlling the speed

## Components required
* STM32F407 micro-controller
* Breadboard
* HC SR04 - Ultrasonic sensor
* Photoresistor - LDR
* Jumper wires and cables
* Object with light source
* Arduino R3-Compatible board
* LED for alerting
* LCD display
* Resistors (330 ohms)


## STM32F407 MICRO CONTROLLER
### What is micro controller?
A microcontroller is embedded inside of a system to control a singular function in a device. It does this by interpreting data it receives from its I/O peripherals using its central processor. The temporary information that the microcontroller receives is stored in its data memory, where the processor accesses it and uses instructions stored in its program memory to decipher and apply the incoming data. It then uses its I/O peripherals to communicate and enact the appropriate action.

![images](https://user-images.githubusercontent.com/98877131/162895133-fa58c2ef-59b1-4a90-81f9-bc30ad256be0.jpg)



### STM32F407 micro-controller Hardware Overview

The STM32F407/417 lines are designed for medical, industrial and consumer applications where the high level of integration and performance, embedded memories and rich peripheral set inside packages as small as 10 x 10 mm are required.
The STM32F407/417 offers the performance of the Cortex™-M4 core (with floating point unit) running at 168 MHz.

Performance: At 168 MHz, the STM32F407/417 deliver 210 DMIPS/566 CoreMark performance executing from Flash memory, with 0-wait states using ST’s ART Accelerator. The DSP instructions and the floating point unit enlarge the range of addressable applications.

Power efficiency: ST’s 90 nm process, ART Accelerator and the dynamic power scaling enables the current consumption in run mode and executing from Flash memory to be as low as 238 µA/MHz at 168 MHz.

--------------------------------------------------------
## HC SR04 - Ultrasonic sensor
### What is Ultrasound?
Ultrasound is high-pitched sound waves with frequencies higher than the audible limit of human hearing.

![ultrasonic-sensor-working](https://user-images.githubusercontent.com/98877131/162888370-e9b53591-4fab-4997-af5f-0bf9598c5932.gif)

### Ultrasonic Frequency Range Spectrum
Human ears can hear sound waves that vibrate in the range from about 20 times a second (a deep rumbling noise) to about 20,000 times a second (a high-pitched whistling). However, ultrasound has a frequency of over 20,000 Hz and is therefore inaudible to humans.

![HC-SR04-Ultrasonic-Sensor-Working-Echo-reflected-from-Obstacle 2](https://user-images.githubusercontent.com/73667634/162880524-b3a8556e-19a5-40cb-91e4-75ca246748f3.gif)

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

The width of the received pulse is then used to calculate the distance to the reflected object. This can be worked out using simple distance-speed-time equation, we learned in High school. In case you forgot, an easy way to remember the distance, speed and time equations is to put the letters into a triangle.

![Distance-Speed-Time-Formula-Triangle](https://user-images.githubusercontent.com/73667634/162880717-675d220f-75b0-4551-807a-933756aa5116.png)

We will use the below equation.


                                                               Distance = Speed x Time

Here, we have the value of Time i.e. 500 µs and we know the speed. What speed do we have? The speed of sound, of course! Its 340 m/s. We have to convert the speed of sound into cm/µs in order to calculate the distance. A quick Google search for “speed of sound in centimeters per microsecond” will say that it is 0.034 cm/µs. You could do the math, but searching it is easier. Anyway, with that information, we can calculate the distance!

                                                               Distance = 0.034 cm/µs x 500 µs

But this is not done! Remember that the pulse indicates the time it took for the signal to be sent out and reflected back so to get the distance so, you’ll need to divide your result in half.

                                                            Distance = (0.034 cm/µs x 500 µs) / 2

                                                                       Distance = 8.5 cm

So, now we know that the object is 8.5 centimeters away from the sensor.



-----------------------------------------------------------
### Arduino R3 board
   The Arduino Uno R3 is a microcontroller board based on a removable, dual-inline-package (DIP) ATmega328 AVR microcontroller. It has 20 digital input/output pins (of which 6 can be used as PWM outputs and 6 can be used as analog inputs). Programs can be loaded on to it from the easy-to-use Arduino computer program. The Arduino has an extensive support community, which makes it a very easy way to get started working with embedded electronics. The R3 is the third, and latest, revision of the Arduino Uno.
   The Arduino Uno is a microcontroller board based on the ATmega328. It has 20 digital input/output pins (of which 6 can be used as PWM outputs and 6 can be used as analog inputs), a 16 MHz resonator, a USB connection, a power jack, an in-circuit system programming (ICSP) header, and a reset button. It contains everything needed to support the microcontroller; simply connect it to a computer with a USB cable or power it with a AC-to-DC adapter or battery to get started.

The Uno differs from all preceding boards in that it does not use the FTDI USB-to-serial driver chip. Instead, it features an ATmega16U2 programmed as a USB-to-serial converter. This auxiliary microcontroller has its own USB bootloader, which allows advanced users to reprogram it.

The Arduino has a large support community and an extensive set of support libraries and hardware add-on “shields” (e.g. you can easily make your Arduino wireless with our Wixel shield), making it a great introductory platform for embedded electronics. Note that we also offer a SparkFun Inventor’s Kit, which includes an Arduino Uno along with an assortment of components (e.g. breadboard, sensors, jumper wires, and LEDs) that make it possible to create a number of fun introductory projects.

This is the 3rd revision of the Uno (R3), which has a number of changes:

The USB controller chip changed from ATmega8U2 (8K flash) to ATmega16U2 (16K flash). This does not increase the flash or RAM available to sketches.
Three new pins were added, all of which are duplicates of previous pins. The I2C pins (A4, A5) have been also been brought out on the side of the board near AREF. There is a IOREF pin next to the reset pin, which is a duplicate of the 5V pin.
The reset button is now next to the USB connector, making it more accessible when a shield is used.

| Microcontroller:      |            | ATmega328P       |
|-----------------------|------------|------------------|
| Clock:                |            | 16 MHz resonator |
| User I/O lines:       |            | 20               |
| PWM outputs:          |            | 6                |
| Analog inputs:        |            | 6                |
| Ground access points: |            | 4                |
| User LEDs:            |            | 3                |
| User pushbuttons:     |            |        —         |
| Reset button:         |            |                  |
| Power switch:         |            |                  |
| Buzzer option:        |            |                  |
| microSD option:       |            |                  |
| LCD option:           |            |                  |
| Arduino-compatible    |            |                  |
| bootloader:           |            |                  |
| USB connector:        |            | B                |
| USB/regulator         |            | partial          |
| power selection:      |            |                  |
| High-performance      |            |                  |
| reverse-voltage       |            |                  |
| protection:           |            |                  |
| Recommended           |            | 7 V to 12 V      |
| input voltage:        |            |                  |
| Regulator type (5 V): |            | linear           |
| Available 5V output current:       | at 3 V in        |        —       |
|                       | at 5 V in  | —                |
|                       | at 7 V in  | 1.0 A            |
|                       | at 9 V in  | 0.5 A            |
|                       | at 11 V in | 0.35 A           |
|                       | at 24 V in |        —         |
|                       | via USB connector    | 0.5 A  |
| Weight:               |            | 28 g             |

-------------------------------------------------------
###

## High Level Requirements
|ID|Description|
|------|------|
|HLR_01| Ultrasonic sensors shall measure the distance of an object using sound waves |
|HLR_02| LDR shall be able to sense the temperature and light   |
|HLR_03| Buzzer alert shall be displayed  |
|HLR_04| Communication protocol between stm32 and Arduino uno  |
|HLR_05| Thickness measurment |
|HLR_06| Display the thickness   |


## Low Level Requirements
|ID|Description|
|------|------|
|LLR_01| Object required for sensing the ultrasonic waves  |
|LLR_02| Light source required for sensing ldr |
|LLR_03| Data  transfer must be continuous from board to board     |
|LLR_04| LCD should display the exact distance between the vehicles |
|LLR_05| No alert for thickness higher than threeshold value  |
|LLR_06| Buzzer alert for low thickness |
|LLR_07| The exact thickness need to display |

-------------------------------------------------
## SWOT Analysis

![car safety system drawio](https://user-images.githubusercontent.com/98897973/163328174-e5b9de46-8a1b-4ea7-923d-1b20ce824f8d.png)

-------------------------------------------------
## 4H & 1H
![4w](https://user-images.githubusercontent.com/98877131/163323326-2fd91594-57c8-4a14-a830-b996f91f3f3f.png)

## Block Diagram
![Block 1 drawio](https://user-images.githubusercontent.com/98897973/163094240-913d5dc2-ae13-43ac-8060-9a0f8c03255f.png)

## Structural Diagram

![Structure](https://user-images.githubusercontent.com/98897973/163094407-283092cf-1e95-4ab6-889e-4f6fa134cbdb.png)





## FLOWCHART
![flow](https://user-images.githubusercontent.com/98877131/163333924-69b52259-aae5-445d-82d7-79db73b43dd1.png)

### Test plan is created and verified

## HIGH LEVEL TEST PLAN / Integrated test plan

| Test ID | Description | Input | Expected output | Actual Output | Pass/ Fail   |
| --- | --- | --- | --- | --- | ---|
| 01 | Thickness detection | Object | Object Detection(IDE) | Objected Detected |✅ |
| 02 | Distance display | Object | Distance in cm  | Distance in cm |✅ |
| 03 | Light detection | Light Source | Collision Detected(IDE) | Collision Detected(IDE) | ✅ | 
| 04 | LCD Display | Stepper motor | Colision Detected | Collision Detected | ✅ |
| 05 | Buzzer | Vehicle Detected  | Buzzer alert | Buzzer alert | ✅ |
| 06 | LED Display | Object Approaching | Led On/Off | Led On/Off | ✅ |





## LOW LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output |Pass/Fail |
| --- | --- | --- | --- | --- | ---|
| 01 | Thickness detection | Thickness | thickness Detection(IDE) | thickness  Detected |✅ |
| 02 | Data transfer | ultrasonic senses distance | Data transfered | Data transfered |✅ |
| 03 | Distance of brakepads | brakepad | Distance in cm  | Distance in cm | ✅ |
| 04 | Light detection | Light Source | Collision Detected(IDE) | Collision Detected(IDE) | ✅ |
| 05 | LCD Display | Stepper motor | Colision Detected | Collision Detected | ✅ |
| 06 | Distance display | Object | Distance in cm  | Distance in cm | ✅ | 
| 07 | LED Display | Object Approaching | Led On/Off | Led On/Off  | ✅ |
| 08 | Object detection | Object | Object Detection(IDE) | Objected Detected | ✅ |
| 09 | Distance of vehicle | vehicle | Distance in cm  | Distance in cm | ✅ |

