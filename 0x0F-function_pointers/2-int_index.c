#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: given array to be searched
 * @size: size of the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: index of the first element that is found int.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
