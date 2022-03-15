#include <Servo.h> 
// the setup function runs once when you press reset or power the board
int counter;
int servo_pin = 3;
Servo servo;
int delay_time;
int rotation_time;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  servo.attach(servo_pin);
  counter = 0;
  delay_time=0;
  rotation_time=0;
}



// the loop function runs over and over again forever
void loop() {
  rotation_time = random(2000, 15000);
   
  Serial.println(rotation_time);
  servo.write(0);
  delay(rotation_time);

  delay_time = random(1000,10000);
  servo.write(90);
  servo.detach();
  delay(delay_time);
  servo.attach(servo_pin);

  rotation_time = random(2000, 15000);
  Serial.println(rotation_time);
  servo.write(180);
  delay(rotation_time);

  delay_time = random(1000,10000);
  servo.write(90);
  servo.detach();
  delay(delay_time);
  servo.attach(servo_pin);

  
}
