/*#!/bin/bash*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Prints all possible combination of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			if (num1 != num2)
			{
				if (num1 < num2)
				{
					putchar(num1);
					putchar(num2);
					if (num1 != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
