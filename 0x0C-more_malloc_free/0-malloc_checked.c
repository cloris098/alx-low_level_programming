#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory allocation
 * Return: pointer to the allocated memory
 * else 98
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}

	return (pointer);
}
