#ifndef CUSTOM_MACRO
#define CUSTOM_MACRO

#include <string.h>
#include <malloc.h>

void swapInt(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

char *repeatCharacter(char character, int multiplier)
{
    char *string = (char *)malloc(sizeof(char) * (multiplier + 1));

    memset(string, character, multiplier);
    string[multiplier] = '\0';

    return string;
}

#endif