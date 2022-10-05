#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the number of arguments passed
 * @argc: number of arguments
 * @argv: strings of the arguments
 *
 * Return: Always 0(Success).
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (atoi(argv[1]) <= 0)
		{
			printf("0\n");
		}
		if (atoi(argv[1]) / 25 && ((atoi(argv[1]) / 25) * 25 == argv[1]))
		{
			printf("%d\n", atoi(argv[1]) / 25);
		}
		else if ((atoi(argv[1]) / 10) * 10 == argv[1])
		{
			printf("%d\n", atoi(argv[1]) / 10);
		}
		else if (atoi(argv[1]) / 5)
		{
			printf("%d\n", atoi(argv[1]) / 5);
		}
		else if (atoi(argv[1]) / 2)
		{
			printf("%d\n", atoi(argv[1]) / 2);
		}
		else if (atoi(argv[1]) / 1)
		{
			printf("%d\n", atoi(argv[1]) / 1);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
