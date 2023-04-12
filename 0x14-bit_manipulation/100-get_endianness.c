#include "main.h"

/**
 * get_endianness - Determines the endianness of the system.
 *
 * Return: 1 if little endian, 0 big endian.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *ptr = (char *)&i;

	/* Check if the least significant byte is stored first */
	if (*ptr == 1)
		return (1);

	return (0);
}
