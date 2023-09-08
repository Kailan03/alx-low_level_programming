#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define ERR_MSG "Error"
/**
 * is_digit - checks for non-digit elements in a string
 * @s: the string
 *
 * Return: 0 if non-digit, else 1
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _strlen - returns the length of the string
 * @s: the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
{
	i++;
}
return (i);
}
/**
 * errors - handles errors for main function
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, re, d1, d2, *o, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	o = malloc(sizeof(int) * len);
	if (!o)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		o[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len--)
	{
		d1 = s1[len1] - '0';
		re = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			d2 = s2[len2] - '0';
			re += o[len1 + len2 + 1] + (d1 * d2);
			o[len1 + len2 + 1] = re % 10;
			re /= 10;
		}
		if (re > 0)
			o[len1 + len2 + 1] += re;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (o[i])
			a = 1;
		if (a)
			_putchar(o[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(o);
	return (0);
}
