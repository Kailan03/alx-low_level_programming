#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * binary_to_uint - change a binary number to int
 * @b: string that contains the binary number
 *
 * Return: the new converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int value;

	value = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		value = 2 * value + (b[i] - '0');
	}
	return (value);
}
