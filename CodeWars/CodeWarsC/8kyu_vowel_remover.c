/*Create a function called shortcut to remove the lowercase vowels (a, e, i, o, u ) in a given string.

Examples
"hello"     -->  "hll"
"codewars"  -->  "cdwrs"
"goodbye"   -->  "gdby"
"HELLO"     -->  "HELLO"
don't worry about uppercase vowels
y is not considered a vowel for this kata*/

#include <stdlib.h>
#include <string.h>

char *shortcut(char *str_out, const char *str_in)
{
    int i = 0;
    int j = 0;
    while (i < (int)strlen(str_in))
    {
        if (str_in[i] != 'a' && str_in[i] != 'e' && str_in[i] != 'i' && str_in[i] != 'o' && str_in[i] != 'u')
        {
            str_out[j++] = str_in[i];
        }
        i++;
    }

    str_out[j] = '\0';

    return str_out;
}