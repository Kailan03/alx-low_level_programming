#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_buffer - create buffer of 1024 bytes
 * @file: name of the file
 *
 * Return: pointer to the newly created buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - closes the file
 * @f: file to be closed
 *
 * Return: 0
 */
void close_file(int f)
{
	int i;

	i = close(f);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close f %d\n", f);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int from, to, x, y;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	x = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || x == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		y = write(to, buffer, x);
		if (to == -1 || y == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		x = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (x > 0);
	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
