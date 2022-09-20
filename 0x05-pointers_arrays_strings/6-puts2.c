#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: param of string
 *
 * Return: nothing.
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	i = 0;
	while (i <= len)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
