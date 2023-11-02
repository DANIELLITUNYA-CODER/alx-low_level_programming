#include <stdio.h>
#include <stdlib.h>

int _putchar(char c)
{
    return putchar(c);
}

int _isdigit(int c)
{
    return c >= '0' && c <= '9';
}

int _strlen(char *s)
{
    int len = 0;
    while (s[len] != '\0')
        len++;
    return len;
}

void print_error(void)
{
    printf("Error\n");
    exit(98);
}

void check_digits(char *s)
{
    int i = 0;
    while (s[i])
    {
        if (!_isdigit(s[i]))
            print_error();
        i++;
    }
}

void multiply(char *num1, char *num2)
{
    int len1 = _strlen(num1);
    int len2 = _strlen(num2);
    int *result = calloc(len1 + len2, sizeof(int));
    if (!result)
        print_error();

    for (int i = len1 - 1; i >= 0; i--)
    {
        for (int j = len2 - 1; j >= 0; j--)
        {
            int digit1 = num1[i] - '0';
            int digit2 = num2[j] - '0';
            int sum = digit1 * digit2 + result[i + j + 1];
            result[i + j] += sum / 10;
            result[i + j + 1] = sum % 10;
        }
    }

    int i = 0;
    while (i < len1 + len2 && result[i] == 0)
        i++;

    if (i == len1 + len2)
        putchar('0');

    while (i < len1 + len2)
    {
        _putchar(result[i] + '0');
        i++;
    }
    _putchar('\n');

    free(result);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
        print_error();

    check_digits(argv[1]);
    check_digits(argv[2]);

    multiply(argv[1], argv[2]);

    return 0;
}
