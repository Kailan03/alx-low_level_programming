#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check for digit
 * @str: array str
 *
 * Return: 0
 */
int check_num(char *str)
{
	unsigned int counter;

	counter = 0;
	while (counter < strlen(str))
	{
		if (!isdigit(str[counter]))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
/**
 * main - prints the result
 * @argc: arguments counter
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int counter, str_to_int, sum = 0;

	counter = 1;
	while (counter < argc)
	{
		if (check_num(argv[counter]))
		{
			str_to_int = atoi(argv[counter]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		counter++;
	}
	printf("%d\n", sum);
	return (0);
}
