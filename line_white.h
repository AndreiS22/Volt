#ifndef line_white
#define line_white

#include "hardware_init.h"
#include "citire_snz.h"
#include "motors.h"
#include "variables.h"

int line;
uint8_t pos;
int last_proportional= 0;
int proportional;


uint8_t s1_c;
uint8_t s2_c;
uint8_t s3_c;
uint8_t s4_c;
uint8_t s5_c;
uint8_t s6_c;
uint8_t s7_c;
uint8_t s8_c;
uint8_t s9_c;
uint8_t s10_c;
uint8_t s11_c;
uint8_t s12_c;
uint8_t s13_c;
uint8_t s14_c;
uint8_t s15_c;
uint8_t s16_c;




void read_sensors_black(){
  citire();

  if(s1 < pas0) s1_c = 0;
  else if((s1 > pas0) && (s1 <= pas1)) s1_c = 1;
  else if((s1 > pas1) && (s1 <= pas2)) s1_c = 2;
  else if((s1 > pas2) && (s1 <= pas3)) s1_c = 3;
  else if((s1 > pas3) && (s1 <= pas4)) s1_c = 4;
  else if((s1 > pas4) && (s1 <= pas5)) s1_c = 5;
  else if((s1 > pas5) && (s1 <= pas6)) s1_c = 6;
  else if((s1 > pas6) && (s1 <= pas7)) s1_c = 7;

  if(s2 < pas0) s2_c = 0;
  else if((s2 > pas0) && (s2 <= pas1)) s2_c = 1;
  else if((s2 > pas1) && (s2 <= pas2)) s2_c = 2;
  else if((s2 > pas2) && (s2 <= pas3)) s2_c = 3;
  else if((s2 > pas3) && (s2 <= pas4)) s2_c = 4;
  else if((s2 > pas4) && (s2 <= pas5)) s2_c = 5;
  else if((s2 > pas5) && (s2 <= pas6)) s2_c = 6;
  else if((s2 > pas6) && (s2 <= pas7)) s2_c = 7;

  if(s3 < pas0) s3_c = 0;
  else if((s3 > pas0) && (s3 <= pas1)) s3_c = 1;
  else if((s3 > pas1) && (s3 <= pas2)) s3_c = 2;
  else if((s3 > pas2) && (s3 <= pas3)) s3_c = 3;
  else if((s3 > pas3) && (s3 <= pas4)) s3_c = 4;
  else if((s3 > pas4) && (s3 <= pas5)) s3_c = 5;
  else if((s3 > pas5) && (s3 <= pas6)) s3_c = 6;
  else if((s3 > pas6) && (s3 <= pas7)) s3_c = 7;


  if(s4 < pas0) s4_c = 0;
  else if((s4 > pas0) && (s4 <= pas1)) s4_c = 1;
  else if((s4 > pas1) && (s4 <= pas2)) s4_c = 2;
  else if((s4 > pas2) && (s4 <= pas3)) s4_c = 3;
  else if((s4 > pas3) && (s4 <= pas4)) s4_c = 4;
  else if((s4 > pas4) && (s4 <= pas5)) s4_c = 5;
  else if((s4 > pas5) && (s4 <= pas6)) s4_c = 6;
  else if((s4 > pas6) && (s4 <= pas7)) s4_c = 7;

  if(s5 < pas0) s5_c = 0;
  else if((s5 > pas0) && (s5 <= pas1)) s5_c = 1;
  else if((s5 > pas1) && (s5 <= pas2)) s5_c = 2;
  else if((s5 > pas2) && (s5 <= pas3)) s5_c = 3;
  else if((s5 > pas3) && (s5 <= pas4)) s5_c = 4;
  else if((s5 > pas4) && (s5 <= pas5)) s5_c = 5;
  else if((s5 > pas5) && (s5 <= pas6)) s5_c = 6;
  else if((s5 > pas6) && (s5 <= pas7)) s5_c = 7;

  if(s6 < pas0) s6_c = 0;
  else if((s6 > pas0) && (s6 <= pas1)) s6_c = 1;
  else if((s6 > pas1) && (s6 <= pas2)) s6_c = 2;
  else if((s6 > pas2) && (s6 <= pas3)) s6_c = 3;
  else if((s6 > pas3) && (s6 <= pas4)) s6_c = 4;
  else if((s6 > pas4) && (s6 <= pas5)) s6_c = 5;
  else if((s6 > pas5) && (s6 <= pas6)) s6_c = 6;
  else if((s6 > pas6) && (s6 <= pas7)) s6_c = 7;


  if(s7 < pas0) s7_c = 0;
  else if((s7 > pas0) && (s7 <= pas1)) s7_c = 1;
  else if((s7 > pas1) && (s7 <= pas2)) s7_c = 2;
  else if((s7 > pas2) && (s7 <= pas3)) s7_c = 3;
  else if((s7 > pas3) && (s7 <= pas4)) s7_c = 4;
  else if((s7 > pas4) && (s7 <= pas5)) s7_c = 5;
  else if((s7 > pas5) && (s7 <= pas6)) s7_c = 6;
  else if((s7 > pas6) && (s7 <= pas7)) s7_c = 7;

  if(s8 < pas0) s8_c = 0;
  else if((s8 > pas0) && (s8 <= pas1)) s8_c = 1;
  else if((s8 > pas1) && (s8 <= pas2)) s8_c = 2;
  else if((s8 > pas2) && (s8 <= pas3)) s8_c = 3;
  else if((s8 > pas3) && (s8 <= pas4)) s8_c = 4;
  else if((s8 > pas4) && (s8 <= pas5)) s8_c = 5;
  else if((s8 > pas5) && (s8 <= pas6)) s8_c = 6;
  else if((s8 > pas6) && (s8 <= pas7)) s8_c = 7;

  if(s9 < pas0) s9_c = 0;
  else if((s9 > pas0) && (s9 <= pas1)) s9_c = 1;
  else if((s9 > pas1) && (s9 <= pas2)) s9_c = 2;
  else if((s9 > pas2) && (s9 <= pas3)) s9_c = 3;
  else if((s9 > pas3) && (s9 <= pas4)) s9_c = 4;
  else if((s9 > pas4) && (s9 <= pas5)) s9_c = 5;
  else if((s9 > pas5) && (s9 <= pas6)) s9_c = 6;
  else if((s9 > pas6) && (s9 <= pas7)) s9_c = 7;

  if(s10 < pas0) s10_c = 0;
  else if((s10 > pas0) && (s10 <= pas1)) s10_c = 1;
  else if((s10 > pas1) && (s10 <= pas2)) s10_c = 2;
  else if((s10 > pas2) && (s10 <= pas3)) s10_c = 3;
  else if((s10 > pas3) && (s10 <= pas4)) s10_c = 4;
  else if((s10 > pas4) && (s10 <= pas5)) s10_c = 5;
  else if((s10 > pas5) && (s10 <= pas6)) s10_c = 6;
  else if((s10 > pas6) && (s10 <= pas7)) s10_c = 7;
  
    if(s11 < pas0) s11_c = 0;
  else if((s11 > pas0) && (s11 <= pas1)) s11_c = 1;
  else if((s11 > pas1) && (s11 <= pas2)) s11_c = 2;
  else if((s11 > pas2) && (s11 <= pas3)) s11_c = 3;
  else if((s11 > pas3) && (s11 <= pas4)) s11_c = 4;
  else if((s11 > pas4) && (s11 <= pas5)) s11_c = 5;
  else if((s11 > pas5) && (s11 <= pas6)) s11_c = 6;
  else if((s11 > pas6) && (s11 <= pas7)) s11_c = 7;
  
    if(s12 < pas0) s12_c = 0;
  else if((s12 > pas0) && (s12 <= pas1)) s12_c = 1;
  else if((s12 > pas1) && (s12 <= pas2)) s12_c = 2;
  else if((s12 > pas2) && (s12 <= pas3)) s12_c = 3;
  else if((s12 > pas3) && (s12 <= pas4)) s12_c = 4;
  else if((s12 > pas4) && (s12 <= pas5)) s12_c = 5;
  else if((s12 > pas5) && (s12 <= pas6)) s12_c = 6;
  else if((s12 > pas6) && (s12 <= pas7)) s12_c = 7;

  if(s13 < pas0) s13_c = 0;
  else if((s13 > pas0) && (s13 <= pas1)) s13_c = 1;
  else if((s13 > pas1) && (s13 <= pas2)) s13_c = 2;
  else if((s13 > pas2) && (s13 <= pas3)) s13_c = 3;
  else if((s13 > pas3) && (s13 <= pas4)) s13_c = 4;
  else if((s13 > pas4) && (s13 <= pas5)) s13_c = 5;
  else if((s13 > pas5) && (s13 <= pas6)) s13_c = 6;
  else if((s13 > pas6) && (s13 <= pas7)) s13_c = 7;

  if(s14 < pas0) s14_c = 0;
  else if((s14 > pas0) && (s14 <= pas1)) s14_c = 1;
  else if((s14 > pas1) && (s14 <= pas2)) s14_c = 2;
  else if((s14 > pas2) && (s14 <= pas3)) s14_c = 3;
  else if((s14 > pas3) && (s14 <= pas4)) s14_c = 4;
  else if((s14 > pas4) && (s14 <= pas5)) s14_c = 5;
  else if((s14 > pas5) && (s14 <= pas6)) s14_c = 6;
  else if((s14 > pas6) && (s14 <= pas7)) s14_c = 7;

  if(s15 < pas0) s15_c = 0;
  else if((s15 > pas0) && (s15 <= pas1)) s15_c = 1;
  else if((s15 > pas1) && (s15 <= pas2)) s15_c = 2;
  else if((s15 > pas2) && (s15 <= pas3)) s15_c = 3;
  else if((s15 > pas3) && (s15 <= pas4)) s15_c = 4;
  else if((s15 > pas4) && (s15 <= pas5)) s15_c = 5;
  else if((s15 > pas5) && (s15 <= pas6)) s15_c = 6;
  else if((s15 > pas6) && (s15 <= pas7)) s15_c = 7;

  if(s16 < pas0) s16_c = 0;
  else if((s16 > pas0) && (s16 <= pas1)) s16_c = 1;
  else if((s16 > pas1) && (s16 <= pas2)) s16_c = 2;
  else if((s16 > pas2) && (s16 <= pas3)) s16_c = 3;
  else if((s16 > pas3) && (s16 <= pas4)) s16_c = 4;
  else if((s16 > pas4) && (s16 <= pas5)) s16_c = 5;
  else if((s16 > pas5) && (s16 <= pas6)) s16_c = 6;
  else if((s16 > pas6) && (s16 <= pas7)) s16_c = 7;

  // PID for 12 sensors
  line = (s1_c * 1) + (s2_c * 2) + (s3_c * 3) + (s4_c * 4) + (s5_c * 5) + (s6_c * 6) + (s7_c * 7) + (s8_c * 8) + (s9_c * 9) + (s10_c * 10) +(s11_c * 11) + (s12_c * 12) + (s13_c * 13) + (s14_c * 14) + (s15_c * 15) + (s16_c * 16);
  line = line * 10;
  line = line / (s1_c + s2_c + s3_c + s4_c + s5_c + s6_c + s7_c + s8_c + s9_c + s10_c + s11_c + s12_c + s13_c + s14_c + s15_c + s16_c);
  line = line - 10;


  if(line != -11) {
    if(s3_c + s4_c + s5_c + s6_c + s7_c + s8_c < s9_c + s10_c + s11_c + s12_c + s13_c + s14_c) pos = 2;
    else if(s3_c + s4_c + s5_c + s6_c + s7_c + s8_c > s9_c + s10_c + s11_c + s12_c + s13_c + s14_c) pos = 0;
    //else if (s6_c > 6 && s7_c > 6) pos = 1;
  }


}

long timp = 0;

void follow(){


  read_sensors_black();


  int proportional = line - 55;

  int derivative = proportional - last_proportional;

  int integral;

  last_proportional = proportional;

  integral += proportional;

  long power_difference = (proportional * kp) + (derivative * kd) + (integral * ki) ;
  
  //Serial.println(power_difference);

 if(line != -11)
  { 
    
    if(power_difference > max_vel)  power_difference = max_vel;
    if(power_difference < -max_vel) power_difference = -max_vel;

    if(power_difference > -10 && power_difference < 10) set_motors(255, 255);
    if(power_difference < 0)
      set_motors(max_vel + power_difference, max_vel);
    else
      set_motors(max_vel, max_vel - power_difference); 
  }

  else if (line == -11){
    if (pos == 2)
      set_motors(turn_vel, -turn_vel);
    else if (pos == 0) 
      set_motors(-turn_vel, turn_vel);
    /*else if(pos == 1)
      set_motors(240, 240);*/
  }
}


#endif
