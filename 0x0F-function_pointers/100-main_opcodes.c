#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: list of arguments passed
 *
 * Return: nothing.
 */
void main(int argc, char *argv[])
{
	int nbyte;

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
	printf("co\n"); 
}
