/**
 * set_bit - sets the value of a bit at given index.
 * @n: the number to set the bit to.
 * @index: the index position value.
 *
 * Return: if success 1,
 * if failure -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* create a mask with only the bit at the given index set to 1 */
	mask = 1 << index;
	/* clear the bit at the given index in the number */
	(*n) = (*n) & ~mask;
	/* set the bit at the given index to the desired value */
	(*n) = (*n) | (1 << index);
	return (*n);
}
