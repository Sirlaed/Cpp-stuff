#include <AFMotor.h>
AF_DCMotor motor1 (1);//LEFT
AF_DCMotor motor2 (2);//RIGHT

#define rs 14 // right sensor pin
#define ls 18 // left sensor pin
 
int leftValue;
int rightValue;

void setup() 
{
  pinMode(rs, INPUT);
  pinMode(ls, INPUT);
  motor1.setSpeed(220);
  motor2.setSpeed(235);
}

void sensorReading()
{
  leftValue = digitalRead(ls); // read from left Sensor
  rightValue = digitalRead(rs);

}

void forward()
{
  motor1.setSpeed(220);
  motor2.setSpeed(235);
  motor1.run(FORWARD);
  motor2.run(FORWARD);
}

void turnRight()
{
  motor1.setSpeed(220);
  motor2.setSpeed(50);
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
  
}

void turnLeft()
{
  motor1.setSpeed(50);
  motor2.setSpeed(225);
  motor1.run(BACKWARD);
  motor2.run(FORWARD);
}


void stopMotors()
{
 motor1.run(RELEASE);
 motor2.run(RELEASE);
}

void loop() 
{
  
 sensorReading();
 
    if(leftValue == 1 && rightValue == 0)
    {turnLeft();}

    else if(leftValue == 0 && rightValue == 1)
    {turnRight();}

    else if(leftValue == 0 && rightValue == 0)
    {forward();}

    else if(leftValue == 1 && rightValue == 1)
    {stopMotors();}

  
}