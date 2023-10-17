#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
    int len = 0;

    while (*(s + len) != '\0')
    {
        len++;
    }

    for (len -= 1; len >= 0; len--)
    {
        putchar(*(s + len));
    }
    putchar('\n');
}
