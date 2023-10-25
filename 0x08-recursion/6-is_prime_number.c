#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number to be checked
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
    if (n <= 1)  /* Check for numbers less than or equal to 1 */
        return 0;
    return (check_prime(n, 2));  /* Call the helper function */
}

/**
 * check_prime - Helper function to check if a number is prime
 * @n: The number to be checked
 * @i: The divisor to check
 * Return: 1 if n is a prime number, 0 otherwise
 */
int check_prime(int n, int i)
{
    if (n % i == 0)  /* Check if n is divisible by i */
    {
        if (n == i)  /* Base case - n is divisible only by itself */
            return 1;
        else
            return 0;
    }
    return (check_prime(n, i + 1));  /* Recur with the next divisor */
}
