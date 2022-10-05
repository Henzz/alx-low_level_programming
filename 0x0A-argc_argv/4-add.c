#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int num_checker(char *a);

/**
 * main - prints the number of arguments passed
 * @argc: number of arguments
 * @argv: strings of the arguments
 *
 * Return: Always 0(Success).
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		j = num_checker(argv[i]);
		if (j == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += j;
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * num_checker - checks if a given char is number or not
 * @a: char to be checked
 *
 * Return: 1, if its a number, else 0
 */
int num_checker(char *a)
{
	int i = 0, num = 0, len = strlen(a);

	while (i < len)
	{
		if (a[i] < '0' || a[i] > '9')
		{
			return (-1);
		}
		else
		{
			num = num * 10 + (a[i] - '0');
		}
		i++;
	}
	return (num);
}
