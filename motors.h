#ifndef motors
#define motors

#include "hardware_init.h"


void set_motors(int speedLeft, int speedRight) {
  if (speedLeft < 0) {
    digitalWrite(ain, HIGH);
    analogWrite(pwma, speedLeft);
  } 
  else if (speedLeft >= 0) {
    digitalWrite(ain, LOW);
    analogWrite(pwma, -speedLeft);
  }

  if (speedRight > 0) {
    digitalWrite(bin, LOW);
    analogWrite(pwmb, speedRight);
  }
  else if(speedRight <= 0) {
    digitalWrite(bin, HIGH);
    analogWrite(pwmb, -speedRight);
  }
}

#endif
