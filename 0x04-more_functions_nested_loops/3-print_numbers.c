#include "main.h"
/**
 * print_numbers - function that prints 0 - 9 using _putchar
 *
 * Return: void
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
