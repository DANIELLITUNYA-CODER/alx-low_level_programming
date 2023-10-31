#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
    char *concat;
    int i, j, len, total_len;

    if (ac == 0 || av == NULL)
        return (NULL);

    total_len = 0;
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            total_len++;
        total_len++; /* for the new line character */
    }

    concat = malloc((total_len + 1) * sizeof(char));

    if (concat == NULL)
        return (NULL);

    len = 0;
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            concat[len] = av[i][j];
            len++;
        }
        concat[len] = '\n';
        len++;
    }
    concat[len] = '\0';

    return (concat);
}

