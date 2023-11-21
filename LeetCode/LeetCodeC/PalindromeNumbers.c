#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x)
{
    if (x < 0)
        return false;

    long int original = x, r = 0, reverse = 0;

    while (x != 0)
    {
        r = x % 10;
        reverse = reverse * 10 + r;
        x /= 10;
    }

    return original == reverse;
}