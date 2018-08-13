#include "hardware_init.h"
#include "motors.h"
#include "turbina.h"
#include "citire_snz.h"
#include "line_black.h"

void setup() {
  
 hardwareInit();
 wait_for_start();
 digitalWrite(13, HIGH);
   delay(2000);
  digitalWrite(13, LOW);
  delay(2000);
    /*changeThrottle(force);
    delay(3000);*/
}


void loop()
{
  //TCCR0B = TCCR0B & B11111000 | B00000001; // for PWM frequency of 62500.00 Hz
    //citire_senzori();
   //set_motors(100, 100);
  //changeThrottle(50);
  follow();
   wait_for_stop();
}







