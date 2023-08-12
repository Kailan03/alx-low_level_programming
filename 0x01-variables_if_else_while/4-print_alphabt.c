#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints lowercase without q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i = ('a');

		while (i <= 'z')
		{
			if (i != 'q' && i != 'e')
				putchar(i);
			i++;
		}
	putchar('\n');

	return (0);
}
