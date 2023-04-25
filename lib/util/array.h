#ifndef CUSTOM_ARRAY
#define CUSTOM_ARRAY
#include <malloc.h>

int *newIntArray(int length)
{
    int *array = (int *)malloc(sizeof(int) * (length + 1));

    for (int i = 0; i < length; i++)
        array[i] = 0;

    array[length] = -1;

    return array;
}

int intArrayLength(int *array)
{
    int length = 0;

    while (array[length] != -1)
        length++;

    return length;
}

int intArrayIsSorted(int *array)
{
    int length = intArrayLength(array);

    for (int i = 0; i < length - 1; i++)
        if (array[i] > array[i + 1])
            return 0;

    return 1;
}

#endif