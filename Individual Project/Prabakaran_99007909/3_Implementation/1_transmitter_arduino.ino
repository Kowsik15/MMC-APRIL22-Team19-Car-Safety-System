const int ledPin1 = 5; // digital pin 5 
const int buzzer = 4;
const int ledPin2 = 6; // digital pin 6
const int ldrPin1 = A0; // analog pin 0
const int ldrPin2 = A1; // analog pin 0

int trigPin = 9;    // TRIG pin
int echoPin = 8;    // ECHO pin

float duration_us, distance_cm;

void setup() {

   Serial.begin (115200);
  pinMode(ledPin1, OUTPUT); // Here LED is determined as an ouput or an indicator.
  pinMode(ledPin2, OUTPUT); // Here LED is determined as an ouput or an indicator.
  pinMode(ldrPin1, INPUT);
  pinMode(ldrPin2, INPUT);
  pinMode(buzzer, OUTPUT);
  
    // begin serial port
    //Serial.begin (9600);
    // configure the trigger pin to output mode
    pinMode(trigPin, OUTPUT);
    // configure the echo pin to input mode
    pinMode(echoPin, INPUT);
}
void loop() 
{

     int ldrStatus1 = analogRead(ldrPin1);
     int ldrStatus2 = analogRead(ldrPin2);
     
     if( distance_cm <10) 
     {
          Serial.println('1');
          digitalWrite(LED_BUILTIN,HIGH);  
          digitalWrite(buzzer,HIGH); 
      }
      else
      {
          Serial.println('0');
          digitalWrite(LED_BUILTIN, LOW); 
             digitalWrite(buzzer,LOW); 
          //Serial.print("normal");
      }
      
      if(ldrStatus1 <=900) 
      {
          
          digitalWrite(ledPin1, LOW); 
         // Serial.print("NORMAL 1  :  ");
         // Serial.println(ldrStatus1); 
        delay(500);    
      }
      else
      {
          digitalWrite(ledPin1,HIGH); // If LDR senses light led pin low that means led will stop glowing.
          //Serial.print("ALERT, Obstacles Detected 1: ");
         // delay(500);
          //Serial.println(ldrStatus1);
    
      }
      if( ldrStatus2 <= 900 ) 
      {
           
           digitalWrite(ledPin2,LOW); 
          // Serial.print("NORMAL2    :  ");
          // Serial.println(ldrStatus2);
         // delay(500);
      }
      else
      {
          digitalWrite(ledPin2,HIGH); // If LDR senses light led pin low that means led will stop glowing.
         // Serial.print("ALERT, Obstacles Detected 2:   ");
         // delay(500);
          //Serial.println(ldrStatus2); 
      }
    
      
      // generate 10-microsecond pulse to TRIG pin
      digitalWrite(trigPin, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigPin, LOW);
    
      // measure duration of pulse from ECHO pin
      duration_us = pulseIn(echoPin, HIGH);
      // calculate the distance
      distance_cm = 0.017 * duration_us;
    
      // print the value to Serial Monitor
     // Serial.print("distance: ");
     // Serial.print(distance_cm);
     // Serial.println(" cm");
      //delay(5);
  }
