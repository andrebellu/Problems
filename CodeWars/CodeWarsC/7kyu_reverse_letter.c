/*Task
Given a string str, reverse it and omit all non-alphabetic characters.

Example
For str = "krishan", the output should be "nahsirk".

For str = "ultr53o?n", the output should be "nortlu".

Input/Output
[input] string str
A string consists of lowercase latin letters, digits and symbols.

[output] a string */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char *reverse_letter(const char *str)
{
    int len = strlen(str);
    int alphabeticCount = 0;

    for (int i = 0; i < len; i++)
    {
        if (isalpha(str[i]))
        {
            alphabeticCount++;
        }
    }

    char *r_str = (char *)malloc(alphabeticCount + 1);

    int j = 0;

    for (int i = len - 1; i >= 0; i--)
    {
        if (isalpha(str[i]))
        {
            r_str[j++] = str[i];
        }
    }

    r_str[j] = '\0';

    return r_str;
}