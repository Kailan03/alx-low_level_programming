#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: input
 * @a: input
 *
 * Return: Always 0
 */
char *_strpbrk(char *s, char *a)
{
	int k;

	while (*s)
	{
		for (k = 0; a[k]; k++)
		{
			if (*s == a[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
