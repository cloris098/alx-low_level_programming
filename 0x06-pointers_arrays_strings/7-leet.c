#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str:string to be encoded
 * Return: a pointer to the encoded string
 */

char *leet(char *str)
{
	int findex = 0;
	int sindex = 0;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[findex])
	{
		for (sindex = 0; sindex <= 7; sindex++)
		{
			if (str[findex] == leet[sindex] ||
					str[findex] - 32 == leet[sindex])
				str[findex] = sindex + '0';
		}
		findex++;
	}

	return (str);
}
