#include <AFMotor.h>
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);

void setup() 
{
  motor1.setSpeed(250);  //Velocidad estándar de 250, máxima velocidad posible 255
  motor2.setSpeed(250);  //Recuerda que puedes cambiar la velocidad estándar en el loop
}

void loop() 
{
  motor1.run(FORWARD);   //Recuerda (FORWARD = ADELANTE) – (BACKWARD = ATRAS) – (RELEASE = DETENER)
  motor2.run(FORWARD);
  motor1.setSpeed(100);  //Puedes varias la velocidad de 0 como mínima a 255 como maxima
  motor2.setSpeed(100);  //Sin embargo con velocidades menores a 100 generalmente el motor ya no tiene la potencia para mover un robot
}
