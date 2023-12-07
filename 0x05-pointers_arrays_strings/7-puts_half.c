#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string from half to end
 * @str: param of string
 *
 * Return: nothing.
 */
void puts_half(char *str)
{
	int len, i;

	len = strlen(str) - 1;
	i = (len / 2) + 1;
	while (i <= len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
