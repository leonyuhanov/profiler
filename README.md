# profiler
Simple timer for any task, use to test how long a task takes on your micro :)

# Set up 
```
#include "profiler.h"

profiler objectProfiler;
//.setup(number of tasks to average, task name string)
objectProfiler.setUp(50, "Test-1");

//Start the timer for yout task
objectProfiler.startAction();
//DO SOMETHING HERE whatever it is you want to time
//End timer for this task
objectProfiler.endAction();
//Check to see if the task has run N number of times before dipalying stats
objectProfiler.displayProfile();
```
