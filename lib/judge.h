#ifndef JUDGE
#define JUDGE

#define ITERATION 1000
#define CELL_COUNT 1000

#include <stdio.h>
#include <malloc.h>
#include <time.h>

#include "util/array.h"
#include "util/random.h"

char *judge(void (*callback)(int *))
{
    clock_t start_time, end_time;
    double average_cpu_time_used = 0;

    int defect = 0;

    for (int i = 0; i < ITERATION; i++)
    {
        int *array = newIntArray(CELL_COUNT);
        randomPopulateIntArray(array);

        start_time = clock();
        callback(array);
        end_time = clock();

        average_cpu_time_used = ((average_cpu_time_used * i) + ((double)(end_time - start_time) / CLOCKS_PER_SEC)) / (i + 1);

        if (!intArrayIsSorted(array))
            defect++;
    }

    char *message = (char *)malloc(sizeof(char) * 256);
    sprintf(message, "%d/%d test passed\naverage cpu time /iteration is %lfs", ITERATION - defect, ITERATION, average_cpu_time_used);

    return message;
}

#endif