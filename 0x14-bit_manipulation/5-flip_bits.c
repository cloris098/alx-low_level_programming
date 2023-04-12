#include "main.h"

/**
 * flip_bits - the number of bits needed to flip from n to m
 *
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to be flipped to convert n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int flipped_bits = 0;

	while (xor_result > 0)
	{
		flipped_bits += (xor_result & 1);
		xor_result >>= 1;
	}

	return (flipped_bits);
}
