/*#!/bin/bash*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	srand(time(0));
	a = rand() - RAND_MAX / 2;
	if (a > 0)
	{
		printf("%d a is positive\n", a);
	}
	else if (a < 0)
	{
		printf("%d a is negative\n", a);
	}
	else if (a == 0)
	{
		printf("%d a is zero\n", a);
	}
	return (0);
}
