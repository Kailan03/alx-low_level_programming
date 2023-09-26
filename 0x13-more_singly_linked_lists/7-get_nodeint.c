#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of listint_t linked list
 * @head: pointer to the first node
 * @index: index of the returned node
 *
 * Return: pointer to nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp ? tmp : NULL);
}

