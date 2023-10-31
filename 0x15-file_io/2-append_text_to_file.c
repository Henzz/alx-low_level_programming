#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * append_text_to_file - appends text to the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: pointer to the text content.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int count = 0;
	ssize_t fd, writefd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content == NULL && fd != -1)
	{
		close(fd);
		return (1);
	}

	if (text_content == NULL && fd == -1)
	{
		close(fd);
		return (-1);
	}

	while (text_content[count] != '\0')
		count++;

	writefd = write(fd, text_content, count);
	if (writefd == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
