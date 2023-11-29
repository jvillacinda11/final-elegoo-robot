#ifndef _globals_H_
#define _globals_H_

//function prototypes
void Device_Setup();
void stopTime(int mS); // Pauses car in between motions
void Straight(); // Moves Car Straight
void Right(); // Moves Car Right
void Left(); // Moves Car Left
void uTurn(); // Makes car perform a u-turn
void Stop(); // Stops car


//device information
#define PWMA 5    
#define PWMB 6    
#define AIN 7     
#define BIN 8     
#define STBY 3    
#define MaxSpeed 100 // Maximum Speed of the Car
#define modeSwitch 2 // Mode Switch input

//Change variable time here
#define driveTime 3000 // duration the car drives straight
#define turnTime 630 // Duration the car takes on left and right turns 
#define uTurnTime 1275 // Duration the car takes to make a u-turn
#define breakTime 2000 // Pause in between motions
#endif