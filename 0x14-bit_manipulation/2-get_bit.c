#include "main.h"

#define CHAR_BITS 8
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * print_binary - prints the binary representation of a number.
 * @num: The decimal value to convert to binary.
 */

void print_binary(unsigned long int num)
{
	if (num >> 1)
	{
		print_binary(num >> 1);
	}

	putc((num & 1) ? '1' : '0', stdout);
}

/**
 * get_bit - returns the value of a bit at a given index
 * @n: The decimal value to get a bit from
 * @index: The index of the bit to get
 *
 * Return: The value of the bit at the given index, else -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= INT_BITS)
	{
		return (-1);
	}

	#ifdef DEBUG
	printf("\n[%ld >> %d] is %ld.\n", n, index, (n >> index));
	printf("%ld in binary: ", n);
	print_binary(n);
	printf("\n[%ld >> %d] in binary: ", n, index);
	print_binary(n >> index);
	printf(" <- last bit is bit at index %d\n\n", index);
	#endif

	int bit = ((n >> index) & 1);

	return (bit);
}
