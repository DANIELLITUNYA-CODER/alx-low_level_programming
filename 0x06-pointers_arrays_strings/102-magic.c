#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int a[5];
    int *p;

    a[2] = 1024;
    p = &a[2];

    *(p + 5) = 98; /* This line is added to the code */

    printf("a[2] = %d\n", a[2]);
    return (0);
}
