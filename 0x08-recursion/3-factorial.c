#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: Number to find the factorial of
 *
 * Return: Factorial of n, -1 if n is less than 0
 */
int factorial(int n)
{
    if (n < 0)
        return (-1);
    if (n == 0)
        return (1);
    return (n * factorial(n - 1));
}

