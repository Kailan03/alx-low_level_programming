#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 for big else 1 for little
 */
int get_endianness(void)
{
	unsigned int j;

	char *k;

	j = 1;
	k = (char *) &j;

	return (*k);
}

