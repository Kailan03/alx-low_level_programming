#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		putchar(i++);
	}
		putchar('\n');

	return (0);
}
