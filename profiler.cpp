#include "profiler.h"


profiler::profiler()
{  
  maxRunCount=0;
  runCounter=0;
  selfTestTime=0;
}

void profiler::setUp(unsigned long runCount, char* taskName)
{  
  maxRunCount = runCount;
  profileName = new char[strlen(taskName)+1];
  memcpy(profileName, taskName, strlen(taskName));
  profileName[strlen(taskName)]=0;
  selfProfile();
}

void profiler::startAction()
{
  timer[0] = micros();
}
void profiler::endAction()
{
  timer[1] = micros();
  timer[2] += timer[1]-timer[0];
  runCounter++;
}
void profiler::displayProfile()
{
  if(runCounter<maxRunCount)
  {
    return;
  }
  timer[2] = (timer[2]/maxRunCount)-selfTestTime;
  printf("\r\nTask\t[%s]\tTook an Avg time of\t[%d] Micros\t[%d] Millis over [%d] runs", profileName, timer[2], timer[2]/1000, maxRunCount); 
  timer[2] = 0;
  runCounter = 0;
}
void profiler::selfProfile()
{
  //run 1 test
  startAction();
  endAction();
  displayProfile();
  //Store time taken
  selfTestTime = timer[2];
  timer[2] = 0;
  runCounter = 0;
}
