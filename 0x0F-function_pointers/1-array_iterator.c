#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints eache arr ele on a new line
 * @array: array
 * @size: number of elements
 * @action: pointer
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
