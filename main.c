#include <stdio.h>

#include "lib/judge.h"

#include "lib/algorithm/insertion.h"
#include "lib/algorithm/bubble.h"
#include "lib/algorithm/quick.h"
#include "lib/algorithm/merge.h"
#include "lib/algorithm/heap.h"

int main()
{
    printf("BUBBLE SORT\n");
    printf("%s\n", repeatCharacter('-', 40));
    printf("%s\n", judge(bubbleSort));
    printf("\n");

    printf("HEAP SORT\n");
    printf("%s\n", repeatCharacter('-', 40));
    printf("%s\n", judge(heapSort));
    printf("\n");

    printf("INSERTION SORT\n");
    printf("%s\n", repeatCharacter('-', 40));
    printf("%s\n", judge(insertionSort));
    printf("\n");

    printf("MERGE SORT\n");
    printf("%s\n", repeatCharacter('-', 40));
    printf("%s\n", judge(mergeSort));
    printf("\n");

    printf("QUICK SORT\n");
    printf("%s\n", repeatCharacter('-', 40));
    printf("%s\n", judge(quickSort));
    printf("\n");
}