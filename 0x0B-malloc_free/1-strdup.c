#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: *ptstr
 */
char *_strdup(char *str)
{
	char *ptstr;

	int counter = 0, d;

	if (str == NULL)
		return (NULL);
	while (str[counter] != '\0')
	{
	counter++;
	}
	ptstr = malloc((counter * sizeof(char)) + 1);

	if (ptstr == NULL)
	{
		return (NULL);
	}

	for (d = 0; str[d] != '\0'; d++)
	{
		ptstr[d] = str[d];
	}
	ptstr[d] = '\0';
	return (ptstr);
}
