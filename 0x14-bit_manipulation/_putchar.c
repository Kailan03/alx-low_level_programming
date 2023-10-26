#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _putchar - print character to stdout
 * @c: character to be printed
 *
 * Return: 0 for success else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
