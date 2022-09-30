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
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if ((*argv[i] >= 'a' && *argv[i] <= 'z')
					||
					(*argv[i] >= 'A' && *argv[i] <= 'Z'))
			{
				printf("Error\n");
				return (1);
			}
			else if (atoi(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
