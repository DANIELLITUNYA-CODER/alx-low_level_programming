#include <stdio.h>
#include "main.h"

/**
 * print_buffer - Prints a buffer
 * @b: Buffer to be printed
 * @size: Size of the buffer
 */
void print_buffer(char *b, int size)
{
    int i, j, k;

    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);

        for (j = 0; j < 10; j++)
        {
            if (i + j < size)
                printf("%02x", b[i + j]);
            else
                printf("  ");

            if (j % 2 != 0)
                printf(" ");
        }

        for (k = i; k < i + 10; k++)
        {
            if (k >= size)
                break;
            if (b[k] >= ' ' && b[k] <= '~')
                printf("%c", b[k]);
            else
                printf(".");
        }

        printf("\n");
    }
    if (size <= 0)
        printf("\n");
}
