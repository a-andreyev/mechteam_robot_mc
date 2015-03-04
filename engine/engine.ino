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
	
	//
	//
	for(int i=0;i<180;i+=1)
	{
		if ((delta_a>0)&&(delta_a<180))
		{
			my_servo_a.write(i*delta_a/180);
                        Serial.print("i=");
                        Serial.println(i,DEC);
                        Serial.print("i*delta_a/180=");
                        Serial.println(i*delta_a/180,DEC);
                        /*Serial.print("");
                        Serial.print("I=");
                        Serial.println(i,DEC);*/
			
                      
		}
		if ((delta_b>0)&&(delta_b<180))
		{
			my_servo_b.write(i*delta_b/180);
		}/*
		if ((delta_c>0)&&(delta_c<180))
		{
			my_servo_c.write(i*delta_c/180);
		}
		if ((delta_d>0)&&(delta_d<180))
		{
			my_servo_d.write(i*delta_d/180);
		}
		if ((delta_e>0)&&(delta_e<180))
		{
			my_servo_e.write(i*delta_e/180);
		}
		if ((delta_f>0)&&(delta_f<180))
		{
			my_servo_f.write(i*delta_f/180);
		}
		
		if ((delta_g>0)&&(delta_g<180))
		{
			my_servo_g.write(i*delta_g/180);
		}
		if ((delta_h>0)&&(delta_h<180))
		{
			my_servo_h.write(i*delta_h/180);
		}
		*/
		delay(2);
	}
}
 
void loop() 
{ 
  move_servos(179,60,90,90,90,90);
  while(true) {};
}
