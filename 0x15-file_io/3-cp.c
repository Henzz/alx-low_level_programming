#include "main.h"

void close_file(int fd);

/**
 * close_file - closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies file content from one file to another
 * @ac: number of input
 * @av: file names
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int file_from, file_to, r, w;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(1024 * sizeof(char));
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	file_from = open(av[1], O_RDONLY);
	r = read(file_from, buffer, 1024);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(buffer);
			exit(98);
		}
		w = write(file_to, buffer, r);
		if (file_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(buffer);
			exit(99);
		}
		r = read(file_from, buffer, 1024);
		file_to = open(av[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_file(file_from);
	close_file(file_to);
	return (0);
}
