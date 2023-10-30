#include "main.h"
/**
 * append_text_to_file - append texts at the end of a file
 * @filename: pointer to the file name
 * @text_content: the string of text to append
 *
 * Return: --1 if it fails, --1 if it lacks write permission
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, num, length;

	length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	x = open(filename, O_WRONLY | O_APPEND);
	num = write(x, text_content, length);
	if (x == -1 || num == -1)
		return (-1);

	close(x);
	return (1);
}
