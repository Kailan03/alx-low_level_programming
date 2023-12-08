#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer
 *
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

    /* Traverse the list and free each node */
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
