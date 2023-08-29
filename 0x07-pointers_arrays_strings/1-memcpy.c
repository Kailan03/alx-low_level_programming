#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory where it is stored
 * @src: memory where it is copied to
 * @n: number of bytes
 *
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; i++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
