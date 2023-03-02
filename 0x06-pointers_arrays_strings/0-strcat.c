#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: the first string to be appended to another string
 * @dest: the second string to be appended to the first string
 * Return: a pointer to the destination string @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
