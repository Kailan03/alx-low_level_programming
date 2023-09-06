#include "main.h"
#include <stdlib.h>
/**
 * count_word - splits a string to words
 * @s: string
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int p = 0, c, m = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			p = 0;
		else if (p == 0)
		{
			p = 1;
			m++;
		}
	}
	return (m);
}
/**
 * **strtow - spilts a string to words
 * @str: string to spilt
 *
 * Return: ptrA or NULL
 */
char **strtow(char *str)
{
	char **ptrA, *tmp;
	int i, h = 0, len = 0, w, c = 0, start, stop;

	while (*(str + len))
		len++;
	w = count_word(str);
	if (w == 0)
		return (NULL);
	ptrA = (char **)
		malloc(sizeof(char *) * (w + 1));
	if (ptrA == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] ==  '\0')
		{
			if (c)
			{
				stop = i;
				tmp = (char *)
					malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < stop)
					*tmp++ = str[start++];
				*tmp = '\0';
				ptrA[h] = tmp - c;
				h++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	ptrA[h] = NULL;
	return (ptrA);
}
