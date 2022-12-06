#include <stdio.h>
#include <assert.h>

#include "FreeRTOSConfig.h"

void vAssertCalled(const char * const pcFileName, unsigned long ulLine)
{
    printf ("Assert Called: \n");
    printf (pcFileName);
    printf ("\n at line %d.\n", ulLine);
    assert (0);
    for( ;; );
}
