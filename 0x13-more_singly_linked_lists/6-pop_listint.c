#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the pointer to the head of the list
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
    int data;
    listint_t *temp;

    if (*head == NULL)
        return 0;

    temp = *head;
    *head = (*head)->next;
    data = temp->n;
    free(temp);

    return data;
}

