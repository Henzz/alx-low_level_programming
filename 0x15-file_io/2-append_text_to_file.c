#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * with given text content.
 * @filename: file to be written
 * @text_content: text content to be written
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, i;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_APPEND | O_WRONLY);
	if (o == -1)
		return (-1);
	i = 0;
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}
	else
	{
		close(o);
		return (1);
	}
	w = write(o, text_content, i);
	if (w == -1)
		return (0);
	close(o);
	return (1);
}
