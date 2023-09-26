#include "lists.h"
/**
 * pop_listint - delete the head node of listint_t
 * @head: pointer to the first element in listint_t
 *
 * Return: data inside the element deleted or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (number);
}
