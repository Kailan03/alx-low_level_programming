#include "main.h"
/**
 * _memset - fills memory with constant bytes
 * @s: starting adress in memory
 * @b: the value
 * @n: number of bytes
 *
 * Return: new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
