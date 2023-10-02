#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the file
 * @text_content: the added text
 *
 * Return: --1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int in, a, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	in = open(filename, O_WRONLY | O_APPEND);
	a = write(in, text_content, length);
	if (in == -1 || a == -1)
		return (-1);
	close(in);
	return (1);
}
