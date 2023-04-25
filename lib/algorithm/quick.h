#ifndef QUICK_SORT
#define QUICK_SORT

#include "../util/array.h"
#include "../util/macro.h"

int _partition(int *array, int start, int end)
{
    int pivot = 0;

    for (int i = 0; i < end; i++)
    {
        if (array[i] <= array[end])
            swapInt(&array[i], &array[pivot++]);
    }

    swapInt(&array[pivot], &array[end]);

    return pivot;
}

void _quickSort(int *array, int start, int end)
{
    if (end - start > 0)
    {
        int pivot = _partition(array, start, end);

        _quickSort(array, start, pivot - 1);
        _quickSort(array, pivot + 1, end);
    }
}

void quickSort(int *array)
{
    int length = intArrayLength(array);
    _quickSort(array, 0, length - 1);
}

#endif