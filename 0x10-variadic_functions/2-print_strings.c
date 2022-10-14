#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between numbers
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(ap);
	unsigned int i;
	char *string_val;

	va_start(ap, n);
	string_val = (char *)va_arg(ap, const char *);
	for (i = 0; i < n; i++)
	{
		if (string_val != NULL)
			printf("%s", string_val);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		string_val = (char *)va_arg(ap, const char *);
	}
	printf("\n");
	va_end(ap);
}
