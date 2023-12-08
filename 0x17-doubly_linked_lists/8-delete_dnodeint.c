#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - delete the node at a given posiion in a list
 * @head: pointer to a pointer
 * @index: the position
 *
 * Return: 0 for success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;
    /* Return -1 if the list is empty */
	if (*head == NULL)
	{
		return (-1);
	}

    /* If index is 0, delete the first node */
	if (index == 0)
	{
		dlistint_t *temp = *head;
		*head = (*head)->next;

		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}

    /* Traverse to the specified index */
	current = *head;
	count = 0;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

    /* If index is out of bounds, return -1 */
	if (current == NULL)
	{
		return (-1);
	}

    /* Connect the previous and next nodes to bypass the current node */
	if (current->prev != NULL)
	{
		current->prev->next = current->next;
	}

	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}

    /* Free the memory of the current node */
	free(current);

	return (1);
}
