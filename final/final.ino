#include "functions.cpp"
#include "globals.h"


void setup() {
  pinMode(PWMA, OUTPUT);     
  pinMode(PWMB, OUTPUT);
  pinMode(BIN, OUTPUT);
  pinMode(AIN, OUTPUT);
  pinMode(STBY, OUTPUT);
  digitalWrite(STBY, HIGH);  //Enable Motors to run

  digitalWrite(PWMA, LOW);  // Fully on 
 // digitalWrite(PWMA, HIGH);  // Fully on
}

//main loop
void loop() {

  // Waits for user input
  while (digitalRead(modeSwitch) == 1)  
    ;  

  delay(2000);

 //starts robot
S_Path();

}