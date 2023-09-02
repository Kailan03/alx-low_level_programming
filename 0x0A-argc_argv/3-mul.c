#include <stdio.h>
#include "main.h"
/**
 * _atoi - convers a string to integer
 * @s: string
 *
 * Return: the int gotten from the string
 */
int _atoi(char *s)
{
	int i, n, a, len, e, digit;

	i = 0;
	n = 0;
	a = 0;
	len = 0;
	e = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && e == 0)
	{
		if (s[i] == '-')
			++a;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (a % 2)
				digit = -digit;
					n = n * 10 + digit;
					e = 1;
					if (s[i + 1] < '0' || s[i + 1] > '9')
						break;
					e = 0;
		}
		i++;
	}
	if (e == 0)
		return (0);
	return (n);
}
/**
 * main - multiplying two numbers
 * @argc: number of arguments
 * @argv: nymber of arrays
 *
 * Return: 0 else 1
 */
int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	mul = num1 * num2;

	printf("%d\n", mul);
	return (0);
}
