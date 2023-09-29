#include "main.h"
/**
 * flip_bits - returns the number of bit that is needed to flip
 * @n: first number
 * @m: second number
 *
 * Return: number of bits that is flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int counter = 0;
	unsigned long int current;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = x >> i;
		if (current & 1)
			counter++;
	}
	return (counter);
}
