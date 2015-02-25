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
	Serial.begin(9600);
	my_servo_a.attach(A_PIN); // attaches the servo on pin to the servo object
	my_servo_b.attach(B_PIN); // attaches the servo on pin to the servo object
	my_servo_c.attach(C_PIN); // attaches the servo on pin to the servo object
	my_servo_d.attach(D_PIN); // attaches the servo on pin to the servo object
	my_servo_e.attach(E_PIN); // attaches the servo on pin to the servo object
	my_servo_f.attach(F_PIN); // attaches the servo on pin to the servo object
	//my_servo_g.attach(G_PIN); // attaches the servo on pin to the servo object
	//my_servo_h.attach(H_PIN); // attaches the servo on pin to the servo object
} 
void move_servos(int delta_a=0,int delta_b=0,int delta_c=0,int delta_d=0, int delta_e=0,int delta_f=0,int delta_g=0,int delta_h=0)
{
	int a=180/delta_a;
	int b=180/delta_b;
	int c=180/delta_c;
	int d=180/delta_d;
	int e=180/delta_e;
	int f=180/delta_f;
	//
	//
	for(int i=0;i<180;i+=1)
	{
		if ((delta_a>0)&&(delta_a<180)&&(i%a))
		{
			my_servo_a.write(i/a);
			Serial.write(i/a);
		}
		if ((delta_b>0)&&(delta_b<180)&&(i%b))
		{
			my_servo_b.write(i/b);
		}
		if ((delta_c>0)&&(delta_c<180)&&(i%c))
		{
			my_servo_c.write(i/c);
		}
		if ((delta_d>0)&&(delta_d<180)&&(i%d))
		{
			my_servo_d.write(i/d);
		}
		if ((delta_e>0)&&(delta_e<180)&&(i%e))
		{
			my_servo_e.write(i/e);
		}
		if ((delta_f>0)&&(delta_f<180)&&(i%f))
		{
			my_servo_f.write(i/f);
		}
		/*
		if ((delta_g>0)&&(delta_g<180)&&(i%g))
		{
			my_servo_g.write(i/g);
		}
		if ((delta_h>0)&&(delta_h<180)&&(i%h))
		{
			my_servo_h.write(i/h);
		}
		*/
		delay(2);
	}
}
 
void loop() 
{ 
  move_servos(10,10,90,90,90,90);
}