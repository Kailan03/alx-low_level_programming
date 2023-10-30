#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Read text and print it to STDOUT
 * @filename: file thw text is been read from
 * @letters: number of letters been read
 *
 * Return: number of bytes read(num)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t f;
	ssize_t num;
	ssize_t i;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	i = read(f, buffer, letters);
	num = write(STDOUT_FILENO, buffer, i);

	free(buffer);
	close(f);
	return (num);
}
