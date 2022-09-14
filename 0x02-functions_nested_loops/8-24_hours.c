#include <stdlib.h>
#include "main.h"

/**
 * jack_bauer - prints every minute a day
 *
 * Return: Nothing.
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = '0'; a <= '2'; a++)
	{
		_putchar(a);
		for (b = '0'; b <= '2'; b++)
		{
			_putchar(b);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
