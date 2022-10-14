#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: types of arguments passed
 */
void print_all(const char * const format, ...)
{
	va_list(ap);
	/*char c;*/
	int i;
	/*float f;
	char *string_val;*/

	va_start(ap, format);
	i = 0;
	while (i < 4)
	{
		printf("%d", va_arg(ap, int));
		if (i - 1 != 2)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
