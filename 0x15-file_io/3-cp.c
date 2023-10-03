#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_buffer - creates a buffer
 * @filename: name of the file
 *
 * Return: pointer to the buffer
 */
char *create_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - closes th file
 * @file: file to be closed
 *
 * Return: 0
 */
void close_file(int file)
{
	int i;

	i = close(file);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file);
		exit(100);
	}
}
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, y, from, to;
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
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		y = write(to, buffer, x);
		if (to == -1 || y == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
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
