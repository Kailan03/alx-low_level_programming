#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees the list_t
 * @head: pointer to the beginning of list_t
 *
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		tmp->next = NULL;
		free(head);
		head = tmp;
	}
}
