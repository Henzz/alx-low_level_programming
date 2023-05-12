#include "main.h"

/**
 * create_file - creates a file with given text content
 * @filename: file to be written
 * @text_content: text content to be written
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, i;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);
	if (o == -1)
		return (-1);
	i = 0;
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}
	w = write(o, text_content, i);
	if (w == -1)
		return (0);
	close(o);
	return (1);
}
