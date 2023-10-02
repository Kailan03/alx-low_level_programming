#include "main.h"
/**
 * create_file - creates a file
 * @filename: pointer to the created file
 * @text_content: pointer to where to write the file
 *
 * Return: --1 if it fails, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int file, a, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(file, text_content, length);
	if (file == -1 || a == -1)
		return (-1);
	close(file);
	return (1);
}
