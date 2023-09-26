#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print all element of linked list
 * @h: linked list to print its element
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
}
