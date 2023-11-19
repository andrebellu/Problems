/*Write function RemoveExclamationMarks which removes all exclamation marks from a given string.*/

// Write resulting string into buffer pointed by str_out
void remove_exclamation_marks(const char *str_in, char *str_out)
{
    int j = 0; // Index for the output string

    for (int i = 0; str_in[i] != '\0'; i++)
    {
        if (str_in[i] != '!')
        {
            str_out[j] = str_in[i];
            j++;
        }
    }

    str_out[j] = '\0';
}