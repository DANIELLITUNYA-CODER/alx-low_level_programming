#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: Pointer to the head of the list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
    size_t size = 0;
    listint_t *current, *next;

    if (h == NULL || *h == NULL)
        return (size);

    current = *h;
    while (current != NULL)
    {
        size++;
        next = current->next;
        free(current);
        current = next;

        /* Check if current is revisited */
        if (current == *h)
        {
            *h = NULL; /* Break the loop to avoid infinite loop */
            break;
        }
    }

    *h = NULL; /* Set head to NULL to avoid further usage */

    return (size);
}

