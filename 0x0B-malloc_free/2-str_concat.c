#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concat s1 and s2
 */
char *str_concat(char *s1, char s2)
{
	char *conct;
	int x, zi;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = zi = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[zi] != '\0')
		zi++;
	conct = malloc(sizeof(char) * (x + zi + 1));
	if (conct == NULL)
		return (NULL);
	x = zi = 0;
	while (s1[x] != '\0')
	{
		conct[x] = s1[x];
		x++;
	}
	while (s2[zi] != '\0')
	{
		conct[x] = s2[zi];
		x++, zi++;
	}
	conct[x] = '\0';
	return (conct);
}

