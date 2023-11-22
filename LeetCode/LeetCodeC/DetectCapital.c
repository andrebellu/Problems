bool detectCapitalUse(char *word)
{
    int length = strlen(word);

    bool allCapitals = true;
    for (int i = 0; i < length; i++)
    {
        if (!isupper(word[i]))
        {
            allCapitals = false;
            break;
        }
    }
    if (allCapitals)
    {
        return true;
    }

    bool allNotCapitals = true;
    for (int i = 0; i < length; i++)
    {
        if (!islower(word[i]))
        {
            allNotCapitals = false;
            break;
        }
    }
    if (allNotCapitals)
    {
        return true;
    }

    if (isupper(word[0]))
    {
        bool restLowerCase = true;
        for (int i = 1; i < length; i++)
        {
            if (!islower(word[i]))
            {
                restLowerCase = false;
                break;
            }
        }
        return restLowerCase;
    }

    return false;
}