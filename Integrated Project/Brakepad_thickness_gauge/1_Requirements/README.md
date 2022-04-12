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
* Arduino R3
* HC SR04 Ultrasonic sensor
* Connecting wires
* LCD display
* led 
* Bread board



## STM32F407 MICRO CONTROLLER
### What is micro controller?
A microcontroller is embedded inside of a system to control a singular function in a device. It does this by interpreting data it receives from its I/O peripherals using its central processor. The temporary information that the microcontroller receives is stored in its data memory, where the processor accesses it and uses instructions stored in its program memory to decipher and apply the incoming data. It then uses its I/O peripherals to communicate and enact the appropriate action.

![images](https://user-images.githubusercontent.com/98877131/162895133-fa58c2ef-59b1-4a90-81f9-bc30ad256be0.jpg)



### STM32F407 micro-controller Hardware Overview

The STM32F407/417 lines are designed for medical, industrial and consumer applications where the high level of integration and performance, embedded memories and rich peripheral set inside packages as small as 10 x 10 mm are required.
The STM32F407/417 offers the performance of the Cortex™-M4 core (with floating point unit) running at 168 MHz.

Performance: At 168 MHz, the STM32F407/417 deliver 210 DMIPS/566 CoreMark performance executing from Flash memory, with 0-wait states using ST’s ART Accelerator. The DSP instructions and the floating point unit enlarge the range of addressable applications.

Power efficiency: ST’s 90 nm process, ART Accelerator and the dynamic power scaling enables the current consumption in run mode and executing from Flash memory to be as low as 238 µA/MHz at 168 MHz.


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

## Arduino R3 board
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






## BLOCK DIAGRAM

![block](https://user-images.githubusercontent.com/98877131/162905030-4af2ecce-760a-443f-848a-7ca2c60b791f.png)

## FOW CHART
![fc](https://user-images.githubusercontent.com/98877131/162920685-3a95d353-1322-4530-80ec-c30e0f0afc53.png)




## SWOT ANALYSIS
![swot](https://user-images.githubusercontent.com/98877131/162888560-8921b5af-6a05-410f-8ce5-410b9e394b1d.png)

## 4 W's and 1 H
![4w](https://user-images.githubusercontent.com/98877131/162888650-a9a8e59f-7da8-47d0-9348-d6e19a33ac34.png)


## 3. High Level Requirements
|ID|Description| Status |
|------|------| ----- |
|HLR_01|   thickness measurment | Implemented |
|HLR_02| Display the thickness   | Implemented |
|HLR_03|  Warning for low thickness   | Implemented |


## 4. Low Level Requirements
|ID|ID|Description| status |
|------|------|------| ------ |
|HLR_01|LLR_01|     | Implemented |
||LLR_02|       | Implemented |
|HLR_02|LLR_01|     |      Implemented |  
||LLR_02|       |  Implemented |
|HLR_03|LLR_01|     |     Implemented |          
||LLR_02|     |  Implemented |   




