/*Write an algorithm that takes an array and moves all of the zeros to the end, preserving the order of the other elements.

move_zeros(10, int [] {1, 2, 0, 1, 0, 1, 0, 3, 0, 1}); // -> int [] {1, 2, 1, 1, 3, 1, 0, 0, 0, 0}*/

#include <stddef.h>
#include <stdio.h>

void move_zeros(size_t len, int arr[len])
{
    int c = 0;
    for (int i = 0; i < len; i++)
        if (arr[i] != 0)
            arr[c++] = arr[i];
    while (c < len)
        arr[c++] = 0;
}
