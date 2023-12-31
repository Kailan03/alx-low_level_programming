#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list
 * @head: pointer to a pointer
 * @n: integer
 *
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* Allocate memory for the new node */
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);  /* Return NULL if malloc fails */
	}
	/* Initialize the new node */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	/* Update the previous of the current head if the list is not empty */
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	/* Update the head to point to the new node */
	*head = new_node;

	return (new_node);
}
