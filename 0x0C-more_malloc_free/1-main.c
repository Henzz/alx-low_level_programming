#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", concat);
	concat = string_nconcat("Hello", NULL, 12);
	printf("%s\n", concat);
	/*concat = string_nconcat(NULL, "Hello", 0);
	printf("%s\n", concat);
	concat = string_nconcat(NULL, NULL, 10);
	printf("%s\n", concat);*/
	free(concat);
	return (0);
}
