#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, otherwise specific error codes
 */
int main(int argc, char *argv[])
{
    int a, b, result;
    int (*func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);
    func = get_op_func(argv[2]);

    if (func == NULL || argv[2][1] != '\0')
    {
        printf("Error\n");
        exit(99);
    }

    if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
    {
        printf("Error\n");
        exit(100);
    }

    result = func(a, b);
    printf("%d\n", result);

    return (0);
}

