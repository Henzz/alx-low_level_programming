#include <unistd.h>

/**
 * _putchar - writes the character a to stdout
 *
 * Description: print character
 *
 * @a: parameter passed to be printed
 *
 * Return: Always 0.
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
