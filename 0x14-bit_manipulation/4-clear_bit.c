#include "main.h"

#define THE_BITS 8
#define LONG_BITS (sizeof(unsigned long int) * THE_BITS)

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: A pointer to the bit
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > LONG_BITS)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
