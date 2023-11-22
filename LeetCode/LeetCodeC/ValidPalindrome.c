bool isPalindrome(char *s)
{
    int i, j;
    int len = strlen(s);
    for (i = 0, j = 0; i < len; ++i)
    {
        if (isalnum(s[i]))
        {
            s[j++] = tolower(s[i]);
        }
    }
    s[j] = '\0';

    for (int i = 0; i < j / 2; ++i)
    {
        if (s[i] != s[j - 1 - i])
            return false;
    }

    return true;
}