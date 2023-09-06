#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array fo chars
 * @c: character
 * @size: size of the array
 * Return: ptArray
 */
char *create_array(unsigned int size, char c)
{
	char *ptArray;
	unsigned int counter;

	ptArray = malloc(size * sizeof(char));

	for (counter = 0; counter < size; counter++)
	{
		ptArray[counter] = c;
	}
	return (ptArray);
}
