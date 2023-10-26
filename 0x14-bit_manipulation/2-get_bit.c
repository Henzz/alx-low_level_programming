#include <stddef.h>
#include <stdio.h>
/**
 * get_bit - gets the value of a bit at given index.
 * @n: the number to get the bit.
 * @index: the index position value.
 *
 * Return: if success the value of the bit at a given index,
 * if failure -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int shifted;
	int bitValue;

	/* shift the number to the right side by the index */
	shifted = n >> index;
	bitValue = shifted & 1;
	return (bitValue);
}
