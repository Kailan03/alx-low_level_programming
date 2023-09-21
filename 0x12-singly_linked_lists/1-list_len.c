#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns number of elements in list_t
 * @h: pointer tp list_t
 *
 * Return: number of elements in list_t
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}

