/*In this Kata, you will be given a string that may have mixed uppercase and lowercase letters and your task is to convert that string to either lowercase only or uppercase only based on:

make as few changes as possible.
if the string contains equal number of uppercase and lowercase letters, convert the string to lowercase.
For example:

solve("coDe") = "code". Lowercase characters > uppercase. Change only the "D" to lowercase.
solve("CODe") = "CODE". Uppercase characters > lowecase. Change only the "e" to uppercase.
solve("coDE") = "code". Upper == lowercase. Change all to lowercase.*/

#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char *solve(const char *str)
{
    char *newStr;
    int upper = 0, lower = 0;
    newStr = (char *)malloc(strlen(str) + 1);
    strcpy(newStr, str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            upper++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            lower++;
        }
    }

    if (upper > lower)
    {
        for (int i = 0; newStr[i] != '\0'; i++)
        {
            newStr[i] = toupper(newStr[i]);
        }
    }
    else
    {
        for (int i = 0; newStr[i] != '\0'; i++)
        {
            newStr[i] = tolower(newStr[i]);
        }
    }

    return newStr;
}