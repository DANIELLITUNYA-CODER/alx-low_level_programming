#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer that the function will use to store the result
 * @size_r: Buffer size
 * Return: Pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
        int len1 = 0, len2 = 0, carry = 0, sum = 0, i, j;
        char *tmp;

        while (n1[len1] != '\0')
                len1++;
        while (n2[len2] != '\0')
                len2++;

        if (len1 + 2 > size_r || len2 + 2 > size_r)
                return (0);

        r[size_r] = '\0';
        for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
        {
                sum = carry + (i >= 0 ? n1[i] - '0' : 0) + (j >= 0 ? n2[j] - '0' : 0);
                carry = sum / 10;
                sum = sum % 10;
                size_r--;
                r[size_r] = sum + '0';
        }

        if (size_r == 0)
                return (0);
        tmp = r;
        while (*tmp)
        {
                *tmp = *(tmp + size_r);
                tmp++;
        }

        return (r);
}
