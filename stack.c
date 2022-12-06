#include <stdio.h>
#include "FreeRTOS.h"
#include "task.h"

void vApplicationStackOverflowHook( TaskHandle_t xTask,
                                    char * pcTaskName )
{
    printf ("ERROR: Stack Overflowed - task: %s\n", pcTaskName);
    for( ;; );
}