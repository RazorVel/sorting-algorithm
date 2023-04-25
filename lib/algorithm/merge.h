#ifndef MERGE_SORT
#define MERGE_SORT

#include "../util/array.h"

void _merge(int *array, int start, int middle, int end)
{
    int temp[end - start + 1];
    int count = 0;
    int left = start;
    int right = middle + 1;

    while (left <= middle && right <= end)
    {
        if (array[left] <= array[right])
            temp[count++] = array[left++];
        else
            temp[count++] = array[right++];
    }

    while (left <= middle)
    {
        temp[count++] = array[left++];
    }

    while (right <= end)
    {
        temp[count++] = array[right++];
    }

    for (int i = 0; i < count; i++)
    {
        array[i + start] = temp[i];
    }
}

void _mergeSort(int *array, int start, int end)
{
    if (end - start > 0)
    {
        int middle = (start + end) / 2;

        _mergeSort(array, start, middle);
        _mergeSort(array, middle + 1, end);

        _merge(array, start, middle, end);
    }
}

void mergeSort(int *array)
{
    int length = intArrayLength(array);
    _mergeSort(array, 0, length - 1);
}

#endif