#include <stdio.h>
#include <string.h>

char *capitalizeTitle(char *title);

int main()
{
    char test1[] = "hello world";
    printf("Original: %s\n", test1);
    printf("Capitalized: %s\n\n", capitalizeTitle(test1));

    char test2[] = "aB cd ef";
    printf("Original: %s\n", test2);
    printf("Capitalized: %s\n\n", capitalizeTitle(test2));

    char test3[] = "  multiple  spaces  ";
    printf("Original: %s\n", test3);
    printf("Capitalized: %s\n\n", capitalizeTitle(test3));

    char test4[] = "I HW";
    printf("Original: %s\n", test4);
    printf("Capitalized: %s\n\n", capitalizeTitle(test4));

    return 0;
}

char *capitalizeTitle(char *title)
{
    int i, j;

    for (i = 0, j = 0; title[i] != '\0'; i++)
    {
        if (isspace(title[i]))
        {
            if (i - j > 2)
                title[j] = toupper(title[j]);

            j = i + 1;
        }
        else
            title[i] = tolower(title[i]);
    }

    if (i - j > 2)
        title[j] = toupper(title[j]);

    return title;
}
