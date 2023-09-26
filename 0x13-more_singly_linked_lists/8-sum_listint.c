#include "lists.h"
/**
 * sum_listint - calculates the sum of all data of listint_t
 * @head: pointer to the first node
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
