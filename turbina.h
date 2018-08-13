#ifndef turbina
#define turbina

#include "hardware_init.h"
#include "variables.h"



int verify(int value) {
  if( value < 10 )
    return 10;
  if( value > 100 )
    return 100;
  return value;
}

void changeThrottle(int throttle) {
  throttle = verify(throttle);
  int currentThrottle = esc.read();

  int jump = 1;
  if( throttle < currentThrottle )
    jump = -1;

  while( currentThrottle != throttle ) {
    esc.write(currentThrottle + jump);
    currentThrottle = esc.read();
    delay(25);
  }

}




#endif
