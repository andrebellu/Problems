/*Build a function that returns an array of integers from n to 1 where n>0.

Example : n=5 --> [5,4,3,2,1]*/

/* Note: allocate memory yourself */

#include <stdlib.h>

unsigned short *reverse_seq(unsigned short num)
{
    unsigned short *v = malloc(num * sizeof(int));

    for (int i = 0; i < num; i++)
    {
        v[i] = num - i;
    }

    return v;
}