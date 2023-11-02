#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - multiplies two positive numbers
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: 0 on success, 98 on incorrect number of arguments, 1 on non-digit inputs.
 */
int main(int argc, char *argv[])
{
	int len1, len2, i, j, *result;
	
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	for (i = 0; argv[1][i] != '\0'; i++)
		if (argv[1][i] < '0' || argv[1][i] > '9')
		{
			printf("Error\n");
			return (98);
		}
	for (j = 0; argv[2][j] != '\0'; j++)
		if (argv[2][j] < '0' || argv[2][j] > '9')
		{
			printf("Error\n");
			return (98);
		}

	len1 = i;
	len2 = j;
	result = calloc(len1 + len2, sizeof(*result));

	if (result == NULL)
	{
		printf("Error\n");
		return (98);
	}

	for (i = len1 - 1; i >= 0; i--)
		for (j = len2 - 1; j >= 0; j--)
			result[i + j + 1] += (argv[1][i] - '0') * (argv[2][j] - '0');

	for (i = len1 + len2 - 1; i > 0; i--)
	{
		result[i - 1] += result[i] / 10;
		result[i] %= 10;
	}

	if (result[0] == 0)
		i = 1;
	else
		i = 0;

	for (; i < len1 + len2; i++)
		_putchar(result[i] + '0');
	_putchar('\n');

	free(result);
	return (0);
}
