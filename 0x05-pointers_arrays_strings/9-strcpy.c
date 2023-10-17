#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed to by dest.
 * @dest: The buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
    char *temp = dest;

    while (*src)
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';

    return temp;
}
