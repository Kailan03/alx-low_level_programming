#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	char a;
	char A;

	for (a = 'a'; a <= 'z'; a++);
	for (A = 'A'; A <= 'Z'; A++);

	putchar(a);
	putchar(A);
	putchar('\n');

	return (0);
}
