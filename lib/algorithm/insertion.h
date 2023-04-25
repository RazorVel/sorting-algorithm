#ifndef INSERTION_SORT
#define INSERTION_SORT

#include "../util/array.h"
#include "../util/macro.h"

void insertionSort(int *array)
{
    int length = intArrayLength(array);

    for (int i = 1, j = i; i < length; i++, j = i)
    {
        while (j > 0 && array[j] < array[j - 1])
        {
            swapInt(&array[j], &array[j - 1]);
            j--;
        }
    }
}

#endif