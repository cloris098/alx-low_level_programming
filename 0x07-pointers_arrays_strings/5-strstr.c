#include <stdio.h>
#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: string to search
 * @needle: substring to locate
 * Return: a pointer to the beginning of the located substring else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}
