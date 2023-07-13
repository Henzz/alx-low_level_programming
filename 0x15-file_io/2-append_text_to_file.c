#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: content to append at the end of the file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t o, lettercount;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_APPEND | O_WRONLY);
	if (o == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	lettercount = 0;
	while (text_content[lettercount] != '\0')
		lettercount++;
	write(o, text_content, lettercount);
	close(o);
	return (1);
}
