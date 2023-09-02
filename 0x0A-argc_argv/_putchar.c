#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c
 * @c: input
 *
 * Return: 1(success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
