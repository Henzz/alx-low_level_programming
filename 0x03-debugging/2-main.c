#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest of 4 integers
 * Return: 0
 */
int main(void)
{
	int a, b, c;
	int largest;

	a = 2;
	b = 2;
	c = 0;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
