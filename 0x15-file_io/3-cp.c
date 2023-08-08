#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

void close_file(ssize_t fd);

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(ssize_t fd)
{
	ssize_t c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments.
 * @argv: Array of the arguments name.
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	ssize_t o, o2, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	o = open(argv[1], O_RDONLY);
	r = read(o, buffer, 1024);
	o2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (o == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(o2, buffer, r);
		if (o2 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(o, buffer, 1024);
		o2 = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_file(o);
	close_file(o2);
	return (0);
}
