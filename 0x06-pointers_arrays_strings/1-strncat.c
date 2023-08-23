#include "main.h"
/**
 * _strncat - concatenate two strings
 * using n bytes
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[1] = '\0';
	return (dest);
}
