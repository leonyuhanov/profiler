#ifndef profiler_h
#define profiler_h
#include "Arduino.h"
#include <stdlib.h> 
#include <stdio.h>
#include <math.h>

class profiler
{
  public:
    profiler();
    void setUp(unsigned long runCount, char* taskName);
    void startAction();
    void endAction();
    void displayProfile();
    void selfProfile();
    void startTimer(unsigned long durationInMillis, unsigned long* timer);
    byte hasTimedOut(unsigned long* timer);
    
    char* profileName;
    unsigned long timer[3] = {0,0,0};
    unsigned long maxRunCount;
    unsigned long runCounter;
    unsigned long selfTestTime;
    unsigned long genTimer[3] = {0,0,0};	
};

#endif
