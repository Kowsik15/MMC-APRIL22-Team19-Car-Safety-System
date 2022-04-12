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
## Features
### HC SR04 - Ultrasonic sensor
#### What is Ultrasound?
Ultrasound is high-pitched sound waves with frequencies higher than the audible limit of human hearing.

#### Ultrasonic Frequency Range Spectrum
Human ears can hear sound waves that vibrate in the range from about 20 times a second (a deep rumbling noise) to about 20,000 times a second (a high-pitched whistling). However, ultrasound has a frequency of over 20,000 Hz and is therefore inaudible to humans.

#### HC-SR04 Hardware Overview
At its core, the HC-SR04 Ultrasonic distance sensor consists of two ultrasonic transducers. The one acts as a transmitter which converts electrical signal into 40 KHz ultrasonic sound pulses. The receiver listens for the transmitted pulses. If it receives them it produces an output pulse whose width can be used to determine the distance the pulse travelled. As simple as pie!

The sensor is small, easy to use in any robotics project and offers excellent non-contact range detection between 2 cm to 400 cm (that’s about an inch to 13 feet) with an accuracy of 3mm. Since it operates on 5 volts, it can be hooked directly to an Arduino or any other 5V logic microcontrollers.
S.NO|NAME|
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

![HC-SR04-Ultrasonic-Sensor-Working-Echo-when-no-Obstacle](https://user-images.githubusercontent.com/73667634/162880323-1157a0f1-fbac-4d5a-9cba-d00eed7c6295.gif)

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

#### LDR / photoresistor symbol
The LDR symbol used in electronic circuits is based around the resistor circuit symbol, but shows the light, in the form of arrows shining on it. In this way it follows the same convention used for photodiode and phototransistor circuit symbols where arrows are used to show the light falling on these components.

![light-dependent-resistor-photoresistor-circuit-symbol](https://user-images.githubusercontent.com/73667634/162882986-6ca27ad2-9952-4cec-89b6-ed7f28b47f96.svg)

Circuit symbols used for the light dependent resistor, LDR or photoresistor for both old and new resistor symbols
Photoresistor / light dependent resistor circuit symbols
The light dependent resistor / photoresistor circuit symbols are shown for both the newer style resistor symbol, i.e. a rectangular box and the older zig-zag line resistor circuit symbols.

Often the light dependent resistor symbol may be shown without the circle around it. This is often done on the electronic circuit schematic to save space and reduce the number of lines and circles ont he diagram to redice complication.

#### How an LDR works
It is relatively easy to understand the basics of how an LDR works without delving into complicated explanations. It is first necessary to understand that an electrical current consists of the movement of electrons within a material.

Good conductors have a large number of free electrons that can drift in a given direction under the action of a potential difference. Insulators with a high resistance have very few free electrons, and therefore it is hard to make the them move and hence a current to flow.


###

###
###
###

## High Level Requirements
|ID|Description|
|------|------|
|HLR_01|    |
|HLR_02|    |
|HLR_03|    |
|HLR_04|    |
|HLR_05|    |

## Low Level Requirements
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

## SWOT Analysis
![cas1](https://user-images.githubusercontent.com/98897973/162881536-003c36b7-44f6-4cea-916d-32dbcda90965.png)

## 5W's & 1H
![Untitled Diagram drawio](https://user-images.githubusercontent.com/98897973/162881761-22187055-7677-424b-a928-e7c472527f2a.png)
