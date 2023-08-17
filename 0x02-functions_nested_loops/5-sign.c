#include "main.h"

/**
 * print_sign - prints the number sign
 * @n: the int to check
 * Return: 1 
 */
int print_sign(void)
{
	if (n > 0)
		_putchar('+');
	return (1);
	else if (n == 0)
		_putchar(48);
			return (0);
	else if (n < 0)
		_putchar('-');
	return (-1);
}
