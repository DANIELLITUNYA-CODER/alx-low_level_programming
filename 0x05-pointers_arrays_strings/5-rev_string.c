#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
    int len = 0;
    int start = 0;
    char temp;

    while (*(s + len) != '\0')
    {
        len++;
    }

    len--;

    while (start < len)
    {
        temp = *(s + start);
        *(s + start) = *(s + len);
        *(s + len) = temp;
        start++;
        len--;
    }
}
