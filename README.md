# profiler
Simple timer for any task, use to test how long a task takes on your micro :)

# Set up 
```
#include "profiler.h"

profiler objectProfiler;
//.setup(number of tasks to average, task name string)
objectProfiler.setUp(50, "Test-1");

objectProfiler.startAction();
//DO SOMETHING HERE whatever it is you want to time
objectProfiler.endAction();
objectProfiler.displayProfile();
```
