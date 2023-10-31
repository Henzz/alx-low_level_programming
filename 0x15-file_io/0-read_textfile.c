#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard
 * output.
 * @filename: pointer to the name of the file to read.
 * @letters: number of letters to read.
 *
 * Return: if success the number of letters read and printed,
 * if failure 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, readfd, writefd;
	char buffer[BUFFER_SIZE];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	readfd = read(fd, buffer, letters);
	if (readfd == -1)
		return (0);
	writefd = write(STDOUT_FILENO, buffer, readfd);
	if (writefd == -1)
		return (0);
	close(fd);
	return (writefd);
}
