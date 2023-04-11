#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: bit
 * @index: is the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	unsigned long int a = 0;

	if ((n & (1 << index)) == a)
	{
		return (a);
	}

	return (1);
}
