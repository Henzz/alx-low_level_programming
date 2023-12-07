#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - creates a file with given name.
 * @filename: pointer to the name of the file.
 * @text_content: pointer to a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int count = 0;
	ssize_t fd, writefd;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	writefd = write(fd, text_content, count);
	if (fd == -1 || writefd == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
