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

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* shift the number to the right side by the index */
	shifted = n >> index;
	/* extract the least significant bit (LSB) */
	bitValue = shifted & 1;
	return (bitValue);
}
