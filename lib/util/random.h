#ifndef CUSTOM_RANDOM
#define CUSTOM_RANDOM

#include <time.h>
#include <stdlib.h>

#include "array.h"

#define DIVISOR 1000

void randomInit()
{
    static int FLAG = 0;

    if (!FLAG)
    {
        srand(time(NULL));
        FLAG = 1;
    }
}

void randomPopulateIntArray(int *array)
{
    int length = intArrayLength(array);

    for (int i = 0; i < length; i++)
    {
        array[i] = rand() % DIVISOR;
    }
}

#endif