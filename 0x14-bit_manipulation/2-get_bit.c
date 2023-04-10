#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the bit.
 * @index: index starting from 0 of the bit you want to get
 *
 * Return: If error -1 else the value of bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	unsigned long int mask = 1UL << index;

	int bit = (n & mask) != 0;

	return (bit);
}
