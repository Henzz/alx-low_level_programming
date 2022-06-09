/*#!/bin/bash*/
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char msg[] = "_putchar\n";

	fwrite(msg, sizeof(msg) - 1, 1, stdout);
	return (1);
}
