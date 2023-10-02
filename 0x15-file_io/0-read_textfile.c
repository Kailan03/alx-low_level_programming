#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads text file and print it to the standard output
 * @filename: file to be read
 * @letters: number of letters
 *
 * Return: a else 0 if it fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file;
	ssize_t a;
	ssize_t h;

	file = open(filename, O_RDONLY);
		if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	h = read(file, buffer, letters);
	a = write(STDOUT_FILENO, buffer, h);
	free(buffer);
	close(file);
	return (a);
}
