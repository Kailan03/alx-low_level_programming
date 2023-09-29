#include "main.h"
/**
 * set_bit - sets the value of bit to 1 at a given index
 * @n: pointer to the number
 * @index: index
 *
 * Return: 1 for success or -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
