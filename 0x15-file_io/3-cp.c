#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/* Buffer size */
#define BUFFER_SIZE 1024

/**
 * close_fd - closes a file descriptor
 * @fd: file descriptor.
 * @filename: pointer to the filename.
 */
void close_fd(ssize_t fd, const char *filename)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %s\n", filename);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @ac: number of arguments passed.
 * @av: array of strings of the arguments passed.
 *
 * Return: 1 on success and -1 on failure.
 */
int main(int ac, char **av)
{
	char buffer[BUFFER_SIZE];
	char *f_from, *f_to;
	ssize_t fd_from, readfd_from, fd_to, writefd_to;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_from = av[1];
	f_to = av[2];
	fd_from = open(f_from, O_RDONLY);
	readfd_from = read(fd_from, buffer, BUFFER_SIZE);
	fd_to = open(f_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fd_from == -1 || readfd_from == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", f_from);
			exit(98);
		}
		writefd_to = write(fd_to, buffer, readfd_from);
		if (fd_to == -1 || writefd_to == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", f_to);
			exit(99);
		}
		readfd_from = read(fd_from, buffer, BUFFER_SIZE);
		fd_to = open(f_to, O_WRONLY | O_APPEND);
	} while (readfd_from > 0);

	close_fd(fd_from, f_from);
	close_fd(fd_to, f_to);
	return (1);
}
