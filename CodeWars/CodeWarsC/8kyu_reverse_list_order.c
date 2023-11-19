/*In this kata you will create a function that takes in a list and returns a list with the reverse order.

Examples (Input -> Output)
* [1, 2, 3, 4]  -> [4, 3, 2, 1]
* [9, 2, 0, 7]  -> [7, 0, 2, 9]*/

#include <stdlib.h>

int *reverse_list(const int *array, size_t length)
{
    int *r = malloc(length * sizeof(int));
    int j = length;

    for (int i = 0; i < (int)length; i++)
    {
        r[i] = array[j - 1];
        j--;
    }

    return r;
}