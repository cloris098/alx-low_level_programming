#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned integer
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_val = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (; *b != '\0'; b++)
	{
		if (*b < '0' || *b > '1')
		{
			return (0);
		}

		decimal_val = (decimal_val << 1) + (*b - '0');
	}

	return (decimal_val);
}
