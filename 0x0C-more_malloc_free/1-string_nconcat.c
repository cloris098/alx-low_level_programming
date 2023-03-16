#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: bytes of s2
 * Return: newly allocated space in memory with s1 in it
 * followed by the first n bytes of s2
 * else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char ccstr;
	unsigned int fs1, ss2, concats, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (fs1 = 0; s1[fs1] != '\0'; fs1++)
		;

	for (ss2 = 0; s2[ss2] != '\0'; ss2++)
		;

	if (n > ss2)
		n = ss2;

	concats = fs1 + n;

	ccstr = malloc(concats + 1);

	if (ccstr == NULL)
		return (NULL);

	for (i = 0; i < concats; i++)
		if (i < fs1)
			ccstr[i] = s1[i];
		else
			ccstr[i] = s2[i - fs1];

	ccstr[i] = '\0';

	return (ccstr);
}
