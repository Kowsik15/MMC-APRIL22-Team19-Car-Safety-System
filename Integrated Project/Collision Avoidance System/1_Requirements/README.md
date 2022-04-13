## Description
A Collision Avoidance System is an advanced driver assistance system designed to prevent or reduce the severity of a collision. In its basic form, a forward collision warning system monitors a vehicle's speed, and the distance between the vehicles, so that it can provide a warning to the driver if the vehicles get too close, potentially helping to avoid a crash.Our project invloves two type of collision avoiding system they are
* LDR based i.e light based
* Ultrasonic based i.e distance based

## Components required
* Breadboard
* HC SR04 - Ultrasonic sensor
* Photoresistor - LDR
* Jumper wires and cables
* Object with light source
* Arduino R3-Compatible board
* LED for checking
* Resistors (330 ohms) 
## Features
### HC SR04 - Ultrasonic sensor
#### What is Ultrasound?
Ultrasound is high-pitched sound waves with frequencies higher than the audible limit of human hearing.

#### Ultrasonic Frequency Range Spectrum
Human ears can hear sound waves that vibrate in the range from about 20 times a second (a deep rumbling noise) to about 20,000 times a second (a high-pitched whistling). However, ultrasound has a frequency of over 20,000 Hz and is therefore inaudible to humans.

#### HC-SR04 Hardware Overview
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

#### How Does HC-SR04 Ultrasonic Distance Sensor Work?
It all starts, when a pulse of at least 10 µS (10 microseconds) in duration is applied to the Trigger pin. In response to that the sensor transmits a sonic burst of eight pulses at 40 KHz. This 8-pulse pattern makes the “ultrasonic signature” from the device unique, allowing the receiver to differentiate the transmitted pattern from the ambient ultrasonic noise.

The eight ultrasonic pulses travel through the air away from the transmitter. Meanwhile the Echo pin goes HIGH to start forming the beginning of the echo-back signal.

If those pulses are reflected back the Echo pin goes low as soon as the signal is received. This produces a pulse whose width varies between 150 µS to 25 mS, depending upon the time it took for the signal to be received.

![HC-SR04-Ultrasonic-Sensor-Working-Echo-reflected-from-Obstacle 2](https://user-images.githubusercontent.com/73667634/162880524-b3a8556e-19a5-40cb-91e4-75ca246748f3.gif)

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


### Photoresistor - LDR
Photoresistors, also known as LDR (light-dependent resistors), are components made of semiconductors.

A photoresistor is sensitive to light. Its resistance decreases when lighting increases. Photoresistors have multiple uses, for example, automatic door opening.

![3-s2 0-B9781785483004500014-f01-15-9781785483004](https://user-images.githubusercontent.com/73667634/162882491-ab032b94-c929-41a5-b1c0-9007675abe9d.jpg)

A further application is for illumination control.

In order to illustrate the functionality of a photoresistor (LDR), the latter can be used for voltage control by light intensity, as indicated by the circuit. The photoresistor (LDR) is inserted in a very simple circuit. The output voltage vS varies as a function of the resistance of the photoresistor.

![3-s2 0-B9781785483004500014-f01-16-9781785483004](https://user-images.githubusercontent.com/73667634/162882622-bbf40901-772b-417b-9b6f-886cc6968dda.jpg)

#### What is light dependent resistor, LDR or photoresistor

A photoresistor or light dependent resistor is an electronic component that is sensitive to light. When light falls upon it, then the resistance changes. Values of the resistance of the LDR may change over many orders of magnitude the value of the resistance falling as the level of light increases.

It is not uncommon for the values of resistance of an LDR or photoresistor to be several megohms in darkness and then to fall to a few hundred ohms in bright light.

With such a wide variation in resistance, LDRs are easy to use and there are many LDR circuits available. The sensitivity of light dependent resistors or photoresistors also varies with the wavelength of the incident light.

LDRs are made from semiconductor materials to enable them to have their light sensitive properties. Many materials can be used, but one popular material for these photoresistors is cadmium sulphide, CdS, although the use of these cells is now restricted in Europe because of environmental issues with the use of cadmium.

Similarly other cadmium based semiconductor materials like cadmium CdSe are also restricted. Other materials that can be used include lead sulphide, PbS and indium antimonide, InSb.

Although a semiconductor material is used for these photoresistors, they are purely passive devices because they do not possess a PN junction, and this separates them from other photodetectors like photodiodes and phototransistors.


![Ldr1](https://user-images.githubusercontent.com/73667634/162891423-c0742872-05db-4907-b353-552c9008b9f0.gif)


#### LDR / photoresistor symbol
The LDR symbol used in electronic circuits is based around the resistor circuit symbol, but shows the light, in the form of arrows shining on it. In this way it follows the same convention used for photodiode and phototransistor circuit symbols where arrows are used to show the light falling on these components.

![light-dependent-resistor-photoresistor-circuit-symbol](https://user-images.githubusercontent.com/73667634/162882986-6ca27ad2-9952-4cec-89b6-ed7f28b47f96.svg)

Circuit symbols used for the light dependent resistor, LDR or photoresistor for both old and new resistor symbols
Photoresistor / light dependent resistor circuit symbols
The light dependent resistor / photoresistor circuit symbols are shown for both the newer style resistor symbol, i.e. a rectangular box and the older zig-zag line resistor circuit symbols.

![light-dependent-resistor-symbol](https://user-images.githubusercontent.com/73667634/162891667-5b846c42-d0f7-46f6-ace4-ca233e73ec20.gif)


Often the light dependent resistor symbol may be shown without the circle around it. This is often done on the electronic circuit schematic to save space and reduce the number of lines and circles ont he diagram to redice complication.

#### How an LDR works
It is relatively easy to understand the basics of how an LDR works without delving into complicated explanations. It is first necessary to understand that an electrical current consists of the movement of electrons within a material.

Good conductors have a large number of free electrons that can drift in a given direction under the action of a potential difference. Insulators with a high resistance have very few free electrons, and therefore it is hard to make the them move and hence a current to flow.

#### Photoresistor / LDR structure
Structurally the photoresistor is a light sensitive resistor that has a horizontal body that is exposed to light.

The basic format for a photoresistor is that shown below:

![resistor-light-dependent-photoresistor-structure-02](https://user-images.githubusercontent.com/73667634/162883386-f72f64f3-c4f5-42c8-88a6-28b2875b723a.svg)

#### Photoresistor structure
The active semiconductor region is normally deposited onto a semi-insulating substrate and the active region is normally lightly doped.

In many discrete photoresistor devices, an interdigital pattern is used to increase the area of the photoresistor that is exposed to light. The pattern is cut in the metallisation on the surface of the active area and this lets the light through. The two metallise areas act as the two contacts for the resistor. This area has to be made relatively large because the resistance of the contact to the active area needs to be minimised.

![resistor-light-dependent-photoresistor-structure-01](https://user-images.githubusercontent.com/73667634/162883862-f14dec2f-7788-4965-b861-6348282becca.svg)

#### Photoresistor structure
Photoresistor structure showing interdigital pattern to maximise exposed area.
This type of structure is widely used for many small photoresistors or light dependent resistors that are seen. The interdigital pattern is quite recognisable.

The materials used for photoresistors are semiconductors and include materials such as CdSe, CdS, CdTe, InSb, InP, PbS, PbSe, Ge, Is, GaAs. Each material gives different properties in terms of the wavelength of sensitivity, etc.

In view of the environmental concerns of using Cadmium, this material is not used for any product in Europe, and global use of this type of semiconductor has reduced significantly.

#### Types of photoresistor
Light dependent resistors, LDRs or photoresistors fall into one of two types or categories:

#### a)Intrinsic photoresistors:   
Intrinsic photoresistors use un-doped semiconductor materials including silicon or germanium. Photons fall on the LDR excite electrons moving them from the valence band to the conduction band. As a result, these electrons are free to conduct electricity. The more light that falls on the device, the more electrons are liberated and the greater the level of conductivity, and this results in a lower level of resistance.
#### b)Extrinsic photoresistors:  
Extrinsic photoresistors are manufactured from semiconductor of materials doped with impurities. These impurities or dopants create a new energy band above the existing valence band. As a result, electrons need less energy to transfer to the conduction band because of the smaller energy gap.
Regardless of the type of light dependent resistor or photoresistor, both types exhibit an increase in conductivity or fall in resistance with increasing levels of incident light.

#### LDR frequency dependence
The sensitivity of photoresistors is shown to vary with the wavelength of the light that is impacting the sensitive area of the device. The effect is very marked and it is found that if the wavelength is outside a given range then there is no noticeable effect.

Devices made from different materials respond differently to light of different wavelengths, and this means that the different electronics components can be used for different applications.

It is also found that extrinsic photoresists tend to be more sensitive to longer wavelength light and can be used for infrared. However when working with infrared, care must be taken to avoid heat build-up caused but he elating effect of the radiation.

#### Photoresistor / light dependent resistor latency
One important aspect associated with photoresistors or light dependent resistors is that of the latency, or the time taken for the electronic component to respond to any changes. This aspect can be particularly important for a circuit design.

It takes a noticeable amount of time from any changes in light level before the LDR / photoresistor attains its final value for the new level of light and for this reason the LDR / photo resistor is not a good choice where there are reasonably rapid changing values of light. However when the light changes take place over a period of time they are more than adequate.

The rate at which the resistance changes is called the resistance recovery rate. The LDR / photoresistor normally responds within a few tens of milliseconds when light is applied after total darkness, but when light is removed it can take up to a second or so for the resistance to reach its final level.

It is for this reason that one of the specifications normally quoted in the electronic component datasheets for photo-resistors is the dark resistance after a given time, typically in seconds. Often two values are quoted, one for one second and another for five seconds. These given an indication of the latency of the resistor.

#### Photoresistor applications
Photoresistors are found in many different applications and can be seen in many different electronic circuit designs. They have a very simple structure and they are low cost and rugged devices. They are widely used in many different items of electronic equipment and circuit designs including photographic light meters, fire or smoke alarms as well as burglar alarms, and they also find uses as lighting controls for street lamps.

Extrinsic photoresistors are provide sensitivity for longer wavelengths and as a result they are popular in various electronic circuit designs as info-red photodetectors. Photoresistors can also be used to detect nuclear radiation.

#### Light dependent resistor specifications
There are several specifications that are important for light dependent resistors, LDRs / photoresistors when considering their use in any electronic circuit design.

Parameter|Details|
|-|-|
Max power dissipation		|This is the maximum power the device is able to dissipate within a given temperature range. Derating may be applicable above a certain temperature.|
Maximum operating voltage |	Particularly as the device is semiconductor based, the maximum operating voltage must be observed. This is typically specified at 0 lux, i.e. darkness.| 
Peak wavelength	|This photoresistor specification details the wavelength of maximum sensitivity. Curves may be provided for the overall response in some instances. The wavelength is specified in nm| 
Resistance when illuminated	|The resistance under illumination is a key specification is a key parameter for any photoresistor. Often a minimum and maximum resistance is given under certain light conditions, often 10 lux. A minimum and maximum vale may be given because of the spreads that are likely to be encountered. A 'fully on' condition may also be given under extreme lighting, e.g. 100lux.| 
Dark resistance	|Dark resistance values will be given for the photoresistor. These may be specified after a given time because it takes a while for the resistance to fall as the charge carrier recombine - photoresistors are noted for their slow response times.| 

A typical light dependent resistor, LDR / photoresistor specification may be:

Parameter|Example Figure|
|-|-|
Max power dissipation	|200mW|
Max voltage @ 0 lux	|200V| 
Peak wavelength |	600nm| 
Min. resistance @ 10lux	|1.8kΩ| 
Max. resistance @ 10lux	|4.5kΩ| 
Typ. resistance @ 100lux |0.7kΩ|
Measuring Angle	|15 degree| 
Dark resistance after 1 sec	|0.03MΩ|
Dark resistance after 5 sec	|0.25MΩ|

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
### Breadboard
What is a breadboard?
A breadboard is a solderless device for temporary prototype with electronics and test circuit designs. Most electronic components in electronic circuits can be interconnected by inserting their leads or terminals into the holes and then making connections through wires where appropriate. The breadboard has strips of metal underneath the board and connect the holes on the top of the board. The metal strips are laid out as shown below. Note that the top and bottom rows of holes are connected horizontally and split in the middle while the remaining holes are connected vertically.

![breadboard-01](https://user-images.githubusercontent.com/73667634/162902794-bc058867-ec7f-4ed4-b6ca-e8a2ad40a858.jpg)




Note how all holes in the selected row are connected together, so the holes in the selected column. The set of connected holes can be called a node:

![breadboard-02](https://user-images.githubusercontent.com/73667634/162902804-989ea95a-5a73-4682-8069-5dbd1919c69c.jpg)


To interconnect the selected row node A) and column (node B) a cable going from any hole in the row to any hole in the column is needed:

![breadboard-03](https://user-images.githubusercontent.com/73667634/162903063-61d3f136-d6a2-44f1-bfc0-29b450084694.jpg)


Now the selected column (node B) and row (node A) are interconnected:
![breadboard-04](https://user-images.githubusercontent.com/73667634/162902853-dc0851ae-d1d8-4d69-a5ca-447674d12718.jpg)

#### Breadboarding tips: 
It is important to breadboard a circuit neatly and systematically, so that one can debug it and get it running easily and quickly.  It also helps when someone else needs to understand and inspect the circuit.  Here are some tips: 
1. Always use the side-lines for power supply connections. Power the chips from the side-lines and not directly from the power supply. 
2. Use black wires for ground connections (0V), and red for other power connections. 
3. Keep the jumper wires on the board flat, so that the board does not look cluttered.
4. Route jumper wires around the chips and not over the chips. This makes changing the chips when needed easier. 
5. You could trim the legs of components like resistors, transistors and LEDs, so that they fit in snugly and do not get pulled out by accident.  


###

## High Level Requirements
|ID|Description|
|------|------|
|HLR_01| Ultrasonic sensors shall measure the distance of an object using sound waves |
|HLR_02| LDR shall be able to sense the temperature and light   |
|HLR_03| Buzzer alert shall be displayed  |


## Low Level Requirements
|ID|ID|Description|
|------|------|------|
|HLR_01|LLR_01| sensors shall alert when object gets closer |
||LLR_02| sensors shall not alert when no object are around vehicle |
|HLR_02|LLR_01| LDR Shall Continuosly sense the temperature |       
||LLR_02|  |
|HLR_03|LLR_01|  |              
||LLR_02|       |


## SWOT Analysis
![cas1](https://user-images.githubusercontent.com/98897973/162881536-003c36b7-44f6-4cea-916d-32dbcda90965.png)

## 5W's & 1H
![Untitled Diagram drawio](https://user-images.githubusercontent.com/98897973/162881761-22187055-7677-424b-a928-e7c472527f2a.png)
