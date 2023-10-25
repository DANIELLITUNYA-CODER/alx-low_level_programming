#include "main.h"

int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 * Return: The natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0)  /* Check for negative numbers */
        return -1;
    return (sqrt_helper(n, 1));  /* Call the helper function */
}

/**
 * sqrt_helper - Finds the natural square root of a number
 * @n: The number to find the square root of
 * @i: The current divisor to check
 * Return: The natural square root of n, or -1 if n does not have a natural square root
 */
int sqrt_helper(int n, int i)
{
    if (i * i == n)  /* Base case - check if the square of i equals n */
        return i;
    if (i * i > n)  /* Check if the square of i exceeds n */
        return -1;
    return (sqrt_helper(n, i + 1));  /* Recur with the next divisor */
}
