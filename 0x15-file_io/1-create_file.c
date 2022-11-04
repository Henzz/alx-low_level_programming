#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: content of the file to insert
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file, i;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);
	if (file == -1)
	{
		return (-1);
	}
	i = 0;
	if (text_content != NULL)
	{
		while(text_content[i] != '\0')
			i++;
	}
	write(file, text_content, i);
	close(file);
	return (1);
}
