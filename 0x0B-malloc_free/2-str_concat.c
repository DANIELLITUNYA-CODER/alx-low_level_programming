#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @str: the string to be measured
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
    int len = 0;

    while (str[len])
        len++;

    return (len);
}

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to a newly allocated space in memory containing
 * the contents of s1 followed by the contents of s2, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
    int len1, len2, i, j;
    char *concat;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len1 = _strlen(s1);
    len2 = _strlen(s2);

    concat = malloc(sizeof(char) * (len1 + len2 + 1));

    if (concat == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    for (j = 0; j < len2; j++)
        concat[i + j] = s2[j];

    concat[i + j] = '\0';

    return (concat);
}

