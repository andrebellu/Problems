int finalValueAfterOperations(char **operations, int operationsSize)
{
    int s = 0;

    for (int i = 0; i < operationsSize; ++i)
    {
        if (strchr(operations[i], '+'))
        {
            s++;
        }
        else
        {
            s--;
        }
    }

    return s;
}