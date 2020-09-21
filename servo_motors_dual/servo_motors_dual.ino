#include <Servo.h>          //include the servo library

int potPosition;           //this variable will store the position of the potentiometer
int servoPosition;         //the servo will move to this position

Servo myservo1;              //create first servo object 
Servo myservo2;              //create second servo object

void setup() 
{
  myservo1.attach(9);        //tell the servo object that its servo is plugged into pin 9
  myservo2.attach(10);        //tell the servo object that its servo is plugged into pin 9
}

void loop()
{
  potPosition = analogRead(A0);                     //use analog read to measure the position of the potentiometer (0-1023)
  
  servoPosition = map(potPosition, 0,1023,20,160);  //convert the potentiometer number to a servo position from 20-160
                                                    //Note: its best to avoid driving the little SIK servos all the 
                                                    //way to 0 or 180 degrees it can cause the motor to jitter, which is bad 
                                                    //for the servo.

  myservo1.write(servoPosition);                    //move the first servo to the 10 degree position
  myservo2.write(180-servoPosition);                //move the second servo in the opposite direction
}
