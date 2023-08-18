#include "main.h"
#include <stdio.h>
/**
 * main - prints numbers from 1 - 100 follow by a new line
 * for multiples of three prints Fizz instead of the number
 * and multiples of five Buzz
 * Return: Always 0
 */
int main(void)
{
	int (i);

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else
			if (i % 5 == 0 && i % 3 != 0)
			{
				printf("Buzz");
			}
			else
				if (i % 3 == 0 && i % 5 == 0)
				{
					printf("FizzBuzz");
				}
		else
			if (i == 1)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d", i);
			}
	}
	printf("\n");
	return (0);
}
