/*Given an array of integers, return a new array with each value doubled.

For example:

[1, 2, 3] --> [2, 4, 6]*/
#include <stddef.h>
#include <stdlib.h>

// return a *new, dynamically allocated* array with each element doubled.
int *maps(const int *arr, size_t size)
{
    int *a2 = malloc(size * sizeof(int));

    for (int i = 0; i < (int)size; i++)
    {
        a2[i] = 2 * arr[i];
    }

    return a2;
}