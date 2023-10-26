#include "main.h"
/**
 * print_binary - print binary numbers
 * @n: binary number to be orinted
 *
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int j;
	int counter;
	unsigned long int cnt;

	counter = 0;
	for (j = 63; j >= 0; j--)
	{
		cnt = n >> j;
		if (cnt & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
