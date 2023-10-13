#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
    long num = 612852475143;
    long divisor = 2;
    long largest_prime_factor = 0;

    while (num != 0)
    {
        if (num % divisor != 0)
            divisor++;
        else
        {
            largest_prime_factor = num;
            num = num / divisor;
            if (num == 1)
            {
                printf("%ld\n", largest_prime_factor);
                break;
            }
        }
    }
    return 0;
}
