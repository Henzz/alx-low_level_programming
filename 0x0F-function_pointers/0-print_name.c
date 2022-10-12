#include "function_poiners.h"

/**
 * print_name - a function that prints a name
 * @name: name to be printed
 * @f: a pointer to a function that prints given name
 *
 * Return: nothing.
 */
void print_name(char *name, void(*f)(char *))
{
	f(name);
}
