/**
 * flip_bits - gets the number of bits it would need to flip to
 * get from one number to another.
 * @n: the first number.
 * @m: the second number.
 *
 * Return: if success number of bits it would need to flip to
 * get from one number to another, if failure -1.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp = n ^ m, count = 0;

	/* count the number of set bits in the XOR result */
	while (tmp != 0)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}

	return (count);
}
