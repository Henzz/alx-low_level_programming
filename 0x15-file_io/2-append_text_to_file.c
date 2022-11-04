#include "main.h"

/**
 * append_text_to_file - a function that appends text at
 *                       the end of a file.
 * @filename: name of the file to append
 * @text_content: content to append to the file
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i;

	file = open(filename, O_APPEND | O_WRONLY, 0664);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	i = 0;
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}
	write(file, text_content, i);
	close(file);
	return (1);
}
