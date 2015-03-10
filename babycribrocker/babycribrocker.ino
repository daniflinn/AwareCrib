/*
littleBits Arduino Module
Matt Richard
Feb-09-2014
 
_Blink_

What is supposed to happen:
This sketch "blinks" an output module connected to pin 5

This sketch includs the following commands:
pinMode( pin, mode );       pin = a digital pin, mode = OUTPUT or INPUT
digitalWrite( pin, value ); pin = a digital pin that has been set to OUTPUT, value = HIGH or LOW
delay( time );              time = time of delay in milliseconds
*/


/*
setup - This is where we initialize the sketch
Setup includes commands that set the stage for the rest of the sketch.
The commands inside of setup are only executed once.
After all the commands in setup have been executed, the sketch moves to loop.
*/

//int soundTrigger = A1; //sets soundTriffer to A1
//int motor = 5;         //sets motor to 5
int delaytime = 2000;

void setup(){ // this is the beginning of setup

  // Since we are going to use pin 5 to control an output module
  // we need to set the pinMode of pin 5 to OUTPUT,
  // this means voltage will flow out of the pin.
  pinMode( 5, OUTPUT ); // set pin 5 to OUTPUT mode
  pinMode(A1, INPUT); //set pin A1 as INPUT

}  // this is the end of setup

/*
loop - This is the main part of every arduino sketch.
Loop is a series of commands that executed one after another in order of top to bottom.
When all the commands have been executed, loop begins again from the top.
This goes on for as long as there is power running the Arduino.
*/
void loop(){ // This is the beginning of loop, each command below is executed in order of top to bottom
  
 if(analogRead(A1 >= 10))    
  digitalWrite( 5, HIGH ); // Turn on pin 5 and thus turn on the output module attached to 5
  delay( delaytime ); // wait for a moment before moving forward
  // the number inside the () is the amount of time in milliseconds to wait: 1000ms = 1 second
  // change the number inside the () to change length of delay
  
  digitalWrite( 5, LOW ); // Turn off pin 5 and thus turn off the output module attached to d5


} // this is the end of loop, now return to the beginning of loop and execute the commands again


