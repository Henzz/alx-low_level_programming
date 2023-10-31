#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/* Buffer size */
#define BUFFER_SIZE 1024
void close_fd(ssize_t fd);

/**
 * close_fd - closes a file descriptor
 * @fd: file descriptor.
 */
void close_fd(ssize_t fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %ld\n", fd);
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
	ssize_t fd_from, readfd_from, fd_to, writefd_to;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	readfd_from = read(fd_from, buffer, BUFFER_SIZE);
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fd_from == -1 || readfd_from == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		writefd_to = write(fd_to, buffer, readfd_from);
		if (fd_to == -1 || writefd_to == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		readfd_from = read(fd_from, buffer, BUFFER_SIZE);
		fd_to = open(av[2], O_WRONLY | O_APPEND);
	} while (readfd_from > 0);
	close_fd(fd_from);
	close_fd(fd_to);
	return (0);
}
