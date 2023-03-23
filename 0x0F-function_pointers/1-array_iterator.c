#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each of an element
 * @array: a pointer to an element of the array to iterate over
 * @size:the size of the array
 * @action: a pointer to the function to apply to each element of the array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
