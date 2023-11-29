#include "globals.h"

void setup() {
Device_Setup();
}

//main loop
void loop() {

  // Waits for user input
  while (digitalRead(modeSwitch) == 1)  
    ;  

  delay(2000);

S_Path();

}




//functions
void Device_Setup()
{
    pinMode(PWMA, OUTPUT);     
  pinMode(PWMB, OUTPUT);
  pinMode(BIN, OUTPUT);
  pinMode(AIN, OUTPUT);
  pinMode(STBY, OUTPUT);
  digitalWrite(STBY, HIGH);  //Enable Motors to run

  digitalWrite(PWMA, LOW);  // Fully on 
 // digitalWrite(PWMA, HIGH);  // Fully on
}

// Function - accepts the time in milli-Seconds to go into standby for
void stopTime(int mS){
  digitalWrite(STBY, LOW);  
  delay(mS);                
  digitalWrite(STBY, HIGH);  
}

void Straight()
{
  analogWrite(STBY, MaxSpeed);
  digitalWrite(AIN, HIGH);    
  digitalWrite(BIN, HIGH);    
  digitalWrite(PWMA, HIGH);   
  digitalWrite(PWMB, HIGH);   
  delay(driveTime);              
  stopTime(breakTime);
}

void Right()
{
  analogWrite(STBY, MaxSpeed);
  digitalWrite(AIN, LOW);    
  digitalWrite(BIN, HIGH);
  digitalWrite(PWMA, HIGH);   
  digitalWrite(PWMB, HIGH);
  delay(turnTime);    
  stopTime(breakTime);
}

void Left()
{
   analogWrite(STBY, MaxSpeed);
  digitalWrite(AIN, HIGH);    
  digitalWrite(BIN, LOW);
  digitalWrite(PWMA, HIGH);   
  digitalWrite(PWMB, HIGH);
  delay(turnTime); 
  stopTime(breakTime);
}

void uTurn()
{
  analogWrite(STBY, MaxSpeed);
  digitalWrite(AIN, HIGH);    
  digitalWrite(BIN, LOW);
  digitalWrite(PWMA, HIGH);   
  digitalWrite(PWMB, HIGH);
  delay(turnTime);              
  stopTime(breakTime);
}

void Stop()
{
  digitalWrite(AIN, LOW);    
  digitalWrite(BIN, LOW);    
  digitalWrite(PWMA, LOW);   
  digitalWrite(PWMB, LOW);   
  delay(driveTime);    
}

void S_Path()
{
  Straight();
  Left();  
  Straight();
  Left();  
  Straight();
  Right(); 
  Straight();
  Right(); 
  Straight();
  uTurn(); 
  Straight();
  Left();  
  Straight();
  Left();  
  Straight();
  Right();  
  Straight();
  Right();
  Straight();
  Stop();
}

