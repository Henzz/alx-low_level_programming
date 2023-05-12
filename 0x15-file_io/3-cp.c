#include "main.h"

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
		return (0);
	file_from = open(av[1], O_RDONLY);
	r = read(file_from, buffer, 1024);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[0]);
			free(buffer);
			exit(98);
		}
		w = write(file_to, buffer, r);
		if (file_to == -1 || w == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[1]);
			free(buffer);
			exit(99);
		}
		r = read(file_from, buffer, 1024);
		file_to = open(av[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close(file_from);
	close(file_to);
	return (0);
}
