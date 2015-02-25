#include <Servo.h> 

#define A_PIN 2 //1
#define B_PIN 3 //2
#define C_PIN 4 //3
#define D_PIN 5 //4
#define E_PIN 6 //5
#define F_PIN 7 //6
//#define G_PIN 8 //7
//#define H_PIN 9 //8
 
Servo my_servo_a; // #1
Servo my_servo_b; // #2
Servo my_servo_c; // #3
Servo my_servo_d; // #4
Servo my_servo_e; // #5
Servo my_servo_f; // #6
//Servo my_servo_g; // #7
//Servo my_servo_h; // #8
// a maximum of eight servo objects can be created 
 
int pos = 0; // variable to store the servo position 
 
void setup() 
{
	my_servo_a.attach(A_PIN); // attaches the servo on pin to the servo object
	my_servo_b.attach(B_PIN); // attaches the servo on pin to the servo object
	my_servo_c.attach(C_PIN); // attaches the servo on pin to the servo object
	my_servo_d.attach(D_PIN); // attaches the servo on pin to the servo object
	my_servo_e.attach(E_PIN); // attaches the servo on pin to the servo object
	my_servo_f.attach(F_PIN); // attaches the servo on pin to the servo object
	//my_servo_g.attach(G_PIN); // attaches the servo on pin to the servo object
	//my_servo_h.attach(H_PIN); // attaches the servo on pin to the servo object
} 
 
void loop() 
{ 
  for(pos = 0; pos < 180; pos += 1) // goes from 0 degrees to 180 degrees 
  { // in steps of 1 degree 
    my_servo_a.write(pos); // tell servo to go to position in variable 'pos' 
    delay(3); // waits 15ms for the servo to reach the position 
  }
}