#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum value (included)
 * @max: Maximum value (included)
 *
 * Return: Pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
    int *array;
    int i, length;

    if (min > max)
        return (NULL);

    length = max - min + 1;

    array = malloc(sizeof(int) * length);

    if (array == NULL)
        return (NULL);

    for (i = 0; i < length; i++)
        array[i] = min++;

    return (array);
}

