#define joystick1X A0 //X
#define joystick1Y A1 //Y
#define ANGULO_INICIAL_MOTOR 90
#include <Servo.h>

// --Mapeando servos
Servo motorBase;

void setup(){
  pinMode(joystick1X, INPUT);
  pinMode(joystick1Y, INPUT);
  motorBase.attach(5);
  motorBase.write(ANGULO_INICIAL_MOTOR);
}

void loop(){
 int posX = analogRead(joystick1X);
 posX = map(posX, 0, 1023, 0, 180);
 motorBase.write(posX);
 delay(100);
}


// #include <Servo.h>

// Servo myservo;  // cria o objeto servo
// int pos = 0;    // a variavel que representa a posicao do servo

// void setup() {
//   Serial.begin(9600);
//   myservo.attach(9); 
//   myservo.write(pos);
//   Serial.println( " GRAUS");
// }


// void loop() {


// }