#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: pointer to a string to write the file content
 *
 * Return: --1 if it fails otherwise return -1
 */
int create_file(const char *filename, char *text_content)
{
	int f, num, length;

	length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	num = write(f, text_content, length);

	if (f == -1 || num == -1)
		return (-1);

	close(f);
	return (1);
}
