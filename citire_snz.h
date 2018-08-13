#ifndef citire_snz
#define citire_snz

#include "hardware_init.h"
#include "motors.h"
#include "turbina.h"

void citire(){
  s1 = analogRead(A0);
  s2 = analogRead(A1);
  s3 = analogRead(A2);
  s4 = analogRead(A3);
  s5 = analogRead(A4);
  s6 = analogRead(A5);
  s7 = analogRead(A6);
  s8 = analogRead(A7);
  s9 = analogRead(A8);
  s10 = analogRead(A9);
  s11 = analogRead(A10);
  s12 = analogRead(A11);
  s13 = analogRead(A12);
  s14 = analogRead(A13);
  s15 = analogRead(A14);
  s16 = analogRead(A15);
  sd = digitalRead(7);
 
}
void citire_senzori(){
 
  citire();
  voltSerial.print(s1);
  voltSerial.print("    ");
  voltSerial.print(s2);
  voltSerial.print("    ");
  voltSerial.print(s3);
  voltSerial.print("    ");
  voltSerial.print(s4);
  voltSerial.print("    ");
  voltSerial.print(s5);
  voltSerial.print("    ");
  voltSerial.print(s6);
  voltSerial.print("    ");
  voltSerial.print(s7);
  voltSerial.print("    ");
  voltSerial.print(s8);
  voltSerial.print("    ");
  voltSerial.print(s9);
  voltSerial.print("    ");
  voltSerial.print(s10);
  voltSerial.print("    ");
  voltSerial.print(s11);
  voltSerial.print("    ");
  voltSerial.print(s12);
  voltSerial.print("    ");
  voltSerial.print(s13);
  voltSerial.print("    ");
  voltSerial.print(s14);
  voltSerial.print("    ");
  voltSerial.print(s15);
  voltSerial.print("    ");
  voltSerial.print(s16);
  voltSerial.print("    ");
  voltSerial.println(sd);
}

void wait_for_start() {

  while(start == 0){
       start = digitalRead(telecom);
       changeThrottle(0);
  }

}

void wait_for_stop(){
  start = digitalRead(telecom);
  while(start == 0){
      set_motors(0, 0);
      changeThrottle(0);
  }
    
}

#endif 

