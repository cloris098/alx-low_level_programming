#include "main.h"

/**
 * _strncat - concatenates two strings by using n bytes from @src
 * @src: first string to concatenate
 * @dest: second string to be concatenated to the first string
 * @n:the number of bytes from @src to be appended to @dest
 * Return: pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
