#ifndef hardware_init
#define hardware_init

#include <SoftwareSerial.h>
#include "Servo.h"
#include "Arduino.h"


Servo esc;
int minPulseRate = 1000;
int maxPulseRate = 2000;


#define escPin 4
#define pwma 5
#define ain 2
#define pwmb 6
#define bin 3
#define telecom 17  
#define rx 50
#define tx 51


int s1;
int s2;
int s3;
int s4;
int s5;
int s6;
int s7;
int s8;
int s9;
int s10;
int s11;
int s12;
int s13;
int s14;
int s15;
int s16;
int sd;

uint8_t start = 0;

SoftwareSerial voltSerial(rx, tx);

 void hardwareInit() {
  
  pinMode(pwma,OUTPUT);
  pinMode(ain,OUTPUT);
  pinMode(pwmb,OUTPUT);
  pinMode(bin,OUTPUT);
  pinMode(telecom, INPUT); 
  digitalWrite(ain, LOW);
  digitalWrite(bin, LOW);
  
  Serial.begin(9600);
  Serial.setTimeout(500);
  voltSerial.begin(9600);
  voltSerial.setTimeout(500);
  
  esc.attach(escPin, minPulseRate, maxPulseRate); 
  //esc.write(50);
 
 }
 
 #endif
