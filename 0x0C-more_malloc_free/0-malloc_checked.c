#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes to allocate
 * Return: pointer to the allocated memory
 * else 98
 */

void *malloc_checked(unsigned int b)
{
	char *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
