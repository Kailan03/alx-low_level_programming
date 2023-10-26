#include "main.h"
/**
 * flip_bits - returns the number of bit you need to flip
 * @n: first number
 * @m: second number
 *
 * Return: number that changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, counter;
	unsigned long int cnt;
	unsigned long int ex;

	counter = 0;
	ex = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		cnt = ex >> j;
		if (cnt & 1)
			counter++;
	}
	return (counter);
}
