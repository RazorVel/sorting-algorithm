#ifndef BUBBLE_SORT
#define BUBBLE_SORT

#include "../util/array.h"
#include "../util/macro.h"

void bubbleSort(int *array)
{
    int length = intArrayLength(array);

    for (int i = 0; i < length - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < length - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swapInt(&array[j], &array[j + 1]);
                flag = 1;
            }
        }

        if (!flag)
            break;
    }
}
#endif