/*
 Name:		LEDSegment.ino
 Created:	7/5/2018 2:55:43 PM
 Author:	RavianXReaver
*/

#include "stdio.h"
#include "Metro/Metro.h"

/*
  Showing number 0-9 on a Common Anode 7-segment LED display
  Displays the numbers 0-9 on the display, with one second inbetween.
    A
   ---
F |   | B
  | G |
   ---
E |   | C
  |   |
   ---
    D

 */
 
// Pin 2-8 is connected to the 7 segments of the display.

#define DD			1
#define pinA		2
#define pinB		3
#define pinC		4
#define pinD		5
#define pinE		6
#define pinF		7
#define pinG		8
#define D1			9
#define D2			10
#define D3			11
#define D4			12

void setup() 
{               
	Serial.begin(9600);
	pinMode(DD, 1);
	pinMode(pinA, OUTPUT);     
	pinMode(pinB, OUTPUT);     
	pinMode(pinC, OUTPUT);     
	pinMode(pinD, OUTPUT);     
	pinMode(pinE, OUTPUT);     
	pinMode(pinF, OUTPUT);     
	pinMode(pinG, OUTPUT);   
	pinMode(D1, OUTPUT);  
	pinMode(D2, OUTPUT);  
	pinMode(D3, OUTPUT);  
	pinMode(D4, OUTPUT);  
	pinMode(pinForward, 0);
	pinMode(pinBackward, 0);
	pinMode(pinMins, 0);
	pinMode(pinSecs, 0);
}

void Segment1()  
{
	digitalWrite(D1, 0);
	digitalWrite(D2, 1);
	digitalWrite(D3, 1);
	digitalWrite(D4, 1);
}

void Segment2()
{
	digitalWrite(D1, 1);
	digitalWrite(D2, 0);
	digitalWrite(D3, 1);
	digitalWrite(D4, 1);
}

void Segment3()
{
	digitalWrite(D1, 1);
	digitalWrite(D2, 1);
	digitalWrite(D3, 0);
	digitalWrite(D4, 1);
}

void Segment4()
{
	digitalWrite(D1, 1);
	digitalWrite(D2, 1);
	digitalWrite(D3, 1);
	digitalWrite(D4, 0);
}

void SegmentsDismiss()
{
	digitalWrite(D1, 0);
	digitalWrite(D2, 0);
	digitalWrite(D3, 0);
	digitalWrite(D4, 0);
}

void Display0()
{
	digitalWrite(pinA, 1);
	digitalWrite(pinB, 1);
	digitalWrite(pinC, 1);
	digitalWrite(pinD, 1);
	digitalWrite(pinE, 1);
	digitalWrite(pinF, 1);
	digitalWrite(pinG, 0);
}

void Display1()
{
	digitalWrite(pinA, 0);
	digitalWrite(pinB, 1);
	digitalWrite(pinC, 1);
	digitalWrite(pinD, 0);
	digitalWrite(pinE, 0);
	digitalWrite(pinF, 0);
	digitalWrite(pinG, 0);
}

void Display2()
{
	digitalWrite(pinA, 1);
	digitalWrite(pinB, 1);
	digitalWrite(pinC, 0);
	digitalWrite(pinD, 1);
	digitalWrite(pinE, 1);
	digitalWrite(pinF, 0);
	digitalWrite(pinG, 1);
}

void Display3()
{
	digitalWrite(pinA, 1);
	digitalWrite(pinB, 1);
	digitalWrite(pinC, 1);
	digitalWrite(pinD, 1);
	digitalWrite(pinE, 0);
	digitalWrite(pinF, 0);
	digitalWrite(pinG, 1);
}

void Display4()
{
	digitalWrite(pinA, 0);
	digitalWrite(pinB, 1);
	digitalWrite(pinC, 1);
	digitalWrite(pinD, 0);
	digitalWrite(pinE, 0);
	digitalWrite(pinF, 1);
	digitalWrite(pinG, 1);
}

void Display5()
{
	digitalWrite(pinA, 1);
	digitalWrite(pinB, 0);
	digitalWrite(pinC, 1);
	digitalWrite(pinD, 1);
	digitalWrite(pinE, 0);
	digitalWrite(pinF, 1);
	digitalWrite(pinG, 1);
}

void Display6()
{
	digitalWrite(pinA, 1);
	digitalWrite(pinB, 0);
	digitalWrite(pinC, 1);
	digitalWrite(pinD, 1);
	digitalWrite(pinE, 1);
	digitalWrite(pinF, 1);
	digitalWrite(pinG, 1);
}

void Display7()
{
	digitalWrite(pinA, 1);
	digitalWrite(pinB, 1);
	digitalWrite(pinC, 1);
	digitalWrite(pinD, 0);
	digitalWrite(pinE, 0);
	digitalWrite(pinF, 0);
	digitalWrite(pinG, 0);
}

void Display8()
{
	digitalWrite(pinA, 1);
	digitalWrite(pinB, 1);
	digitalWrite(pinC, 1);
	digitalWrite(pinD, 1);
	digitalWrite(pinE, 1);
	digitalWrite(pinF, 1);
	digitalWrite(pinG, 1);
}

void Display9()
{
	digitalWrite(pinA, 1);
	digitalWrite(pinB, 1);
	digitalWrite(pinC, 1);
	digitalWrite(pinD, 1);
	digitalWrite(pinE, 0);
	digitalWrite(pinF, 1);
	digitalWrite(pinG, 1);
}

void Display0to9()  //First call the segment, then this method.
{
	Display0();
	delay(1000);
	Display1();
	delay(1000);
	Display2();
	delay(1000);
	Display3();
	delay(1000);
	Display4();
	delay(1000);
	Display5();
	delay(1000);
	Display6();
	delay(1000);
	Display7();
	delay(1000);
	Display8();
	delay(1000);
	Display9();
	delay(1000);
}

void loop() 
{
	//Removed a lot of codes from here because they're unnecessary. 
}


