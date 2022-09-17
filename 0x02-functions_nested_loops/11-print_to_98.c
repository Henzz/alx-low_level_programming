#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - print all nartural numbers from n to 98
 * @n: int point of start
 *
 * Return: Nothing.
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d", n);
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	printf("\n");
}
