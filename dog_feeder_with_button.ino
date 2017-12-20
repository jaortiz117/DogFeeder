

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int buttonState = 0;

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode(7, INPUT); // push button connected on pin 7
  Serial.begin(9600); // begin serial communication with board at 9600 baud rate
}

void loop() {
  buttonState = digitalRead(7); // saves the current state of pushbutton

  Serial.println(buttonState);  //outputs to PC current state of button 
  
  if (buttonState == HIGH)  //when button pressed open feeder
  {
    myservo.write(180);           
    delay(1000);                      
  }
  
  else{ // close feeder
    myservo.write(0);
  }
}

