#ifndef HEAP_SORT
#define HEAP_SORT

#include "../util/array.h"
#include "../util/macro.h"

void _downMaxHeap(int *array, int length, int index)
{
    int largest = index;

    int left = index * 2;
    int right = left + 1;

    if (left <= length && array[left - 1] > array[largest - 1])
        largest = left;
    if (right <= length && array[right - 1] > array[largest - 1])
        largest = right;

    swapInt(&array[index - 1], &array[largest - 1]);

    if (index != largest)
        _downMaxHeap(array, length, largest);
}

void _normalizeMaxHeap(int *array, int length)
{
    for (int i = length / 2; i >= 1; i--)
    {
        _downMaxHeap(array, length, i);
    }
}

void _heapSort(int *array, int length)
{
    _normalizeMaxHeap(array, length);

    for (int i = length; i > 1; i--)
    {
        swapInt(&array[0], &array[i - 1]);
        _downMaxHeap(array, i - 1, 1);
    }
}

void heapSort(int *array)
{
    int length = intArrayLength(array);
    _heapSort(array, length);
}

#endif