#include <stdio.h>
/**
 * main - Entry point
 *
 * Describtion: Printing the lowercase alphabets
 *
 * Return: Always 0 (sucess)
 *
 */

int main(void)

{
	char letter = 'a';

	while (letter <= 'z')

	{
	putchar(letter);
	letter++;
	}

	return (0);
}
