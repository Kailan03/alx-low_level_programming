#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments
 * @ac: input
 * @av: input
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, x = 0, y = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	{
		for 
