#include "main.h"
#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words in `str`.
 */
int word_count(char *str)
{
    int i, count = 0;

    for (i = 0; str[i]; i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
            count++;
    }

    return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str = NULL, str = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
    char **strings;
    int i, j, k, words, word_len;

    if (str == NULL || *str == '\0')
        return (NULL);

    words = word_count(str);
    if (words == 0)
        return (NULL);

    strings = malloc((words + 1) * sizeof(char *));
    if (strings == NULL)
        return (NULL);

    for (i = 0, j = 0; i < words; i++)
    {
        while (str[j] == ' ')
            j++;
        word_len = 0;
        while (str[j + word_len] != ' ' && str[j + word_len] != '\0')
            word_len++;

        strings[i] = malloc((word_len + 1) * sizeof(char));

        if (strings[i] == NULL)
        {
            for (k = 0; k < i; k++)
                free(strings[k]);
            free(strings);
            return (NULL);
        }

        for (k = 0; k < word_len; k++)
            strings[i][k] = str[j++];
        strings[i][k] = '\0';
    }
    strings[i] = NULL;

    return (strings);
}

