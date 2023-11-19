/*You are given an array (which will have a length of at least 3, but could be very large) containing integers.
The array is either entirely comprised of odd integers or entirely comprised of even integers except for a single integer N.
Write a method that takes the array as an argument and returns this "outlier" N.

Examples
[2, 4, 0, 100, 4, 11, 2602, 36] -->  11 (the only odd number)

[160, 3, 1719, 19, 11, 13, -21] --> 160 (the only even number)*/

#include <stddef.h>

int find_outlier(const int values[/* count */], size_t count)
{
    int e = 0;
    int o = 0;
    int n = 0;

    for (int i = 0; i < 3; i++)
    {

        if (values[i] % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }

    if (e > o)
    {
        for (size_t i = 0; i < count; i++)
        {
            if (values[i] % 2 != 0)
            {
                n = values[i];
            }
        }
    }
    else
    {
        for (size_t i = 0; i < count; i++)
        {
            if (values[i] % 2 == 0)
            {
                n = values[i];
            }
        }
    }

    return n;
}