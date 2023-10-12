#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as parameter
 * on each element of an array
 * @array: given array
 * @size: size of the array
 * @action: pointer function that prints given int
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned long int i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
