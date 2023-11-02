#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with a call to malloc
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes, of the new memory block
 *
 * Return: Pointer to the reallocated memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;

    if (new_size == old_size)
        return (ptr);

    if (ptr == NULL)
    {
        new_ptr = malloc(new_size);
        if (new_ptr == NULL)
            return (NULL);
        return (new_ptr);
    }

    if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return (NULL);
    }

    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
        return (NULL);

    if (new_size < old_size)
        old_size = new_size;

    for (unsigned int i = 0; i < old_size; i++)
        *((char *)new_ptr + i) = *((char *)ptr + i);

    free(ptr);
    return (new_ptr);
}

