#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_file - creates a file.
 * @filename: name of the file to be created.
 * @text_content: contents to be written.
 * Return: 1 on success or -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t o, lettercount;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);
	if (o == -1)
		return (-1);
	lettercount = 0;
	if (text_content != NULL)
	{
		while (text_content[lettercount] != '\0')
			lettercount++;
	}
	write(o, text_content, lettercount);
	close(o);
	return (1);

}
