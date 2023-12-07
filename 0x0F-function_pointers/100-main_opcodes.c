#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: list of arguments passed
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int nbyte, i = 0;
	int (*address)(int, char **) = main;
	unsigned char code;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nbyte = atoi(argv[1]);
	if (nbyte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < nbyte; i++)
	{
		code = *(unsigned char *)address;
		printf("%.2x", code);
		if (i == nbyte - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
