/*/bin/bash*/
#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char new;

	new = '\n';
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar(new);
	return (0);
}
