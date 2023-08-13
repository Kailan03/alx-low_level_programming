#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
		putchar(i++);
	}
		putchar('\n');

	return (0);
}
