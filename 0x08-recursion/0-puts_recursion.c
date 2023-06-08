#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: the string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		print_char(*s);
		_puts_recursion(s + 1);
	}
	else
		print_char('\n');
}
