#include "globals.h"

// Function - accepts the time in milli-Seconds to go into standby for
void stopTime(int mS){
  digitalWrite(STBY, LOW);   // Go into standby
  delay(mS);                //  Wait defined time
  digitalWrite(STBY, HIGH);  //  Come out of standby
}

void Straight(){
  analogWrite(STBY, MaxSpeed);
  digitalWrite(AIN, HIGH);    
  digitalWrite(BIN, HIGH);    
  digitalWrite(PWMA, HIGH);   
  digitalWrite(PWMB, HIGH);   
  delay(driveTime);              
  stopTime(breakTime);
}

void Right(){
  analogWrite(STBY, MaxSpeed);
  digitalWrite(AIN, LOW);    
  digitalWrite(BIN, HIGH);
  digitalWrite(PWMA, HIGH);   
  digitalWrite(PWMB, HIGH);
  delay(turnTime);    
  stopTime(breakTime);
}

void Left(){
   analogWrite(STBY, MaxSpeed);
  digitalWrite(AIN, HIGH);    
  digitalWrite(BIN, LOW);
  digitalWrite(PWMA, HIGH);   
  digitalWrite(PWMB, HIGH);
  delay(turnTime); 
  stopTime(breakTime);
}

void uTurn() {
  analogWrite(STBY, MaxSpeed);
  digitalWrite(AIN, HIGH);    
  digitalWrite(BIN, LOW);
  digitalWrite(PWMA, HIGH);   
  digitalWrite(PWMB, HIGH);
  delay(turnTime);              
  stopTime(breakTime);
}

void Stop() {
  digitalWrite(AIN, LOW);    
  digitalWrite(BIN, LOW);    
  digitalWrite(PWMA, LOW);   
  digitalWrite(PWMB, LOW);   
  delay(driveTime);    
}



void S_Path() {
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