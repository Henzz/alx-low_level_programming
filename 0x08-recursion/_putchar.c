#include "main.h"

/**
 * print_char - prints a character
 *
 * Description: takes a character value and prints it to the output
 * @c: the character to be printed
 */
void print_char(char c)
{
	write(1, &c, 1);
}
