#include "main.h"
#include <stdio.h>

/**
 * rot13 - encode using rot13
 * @s: pointer to string parameters
 * Return: @s
 */
char *rot13(char *s)
{
	int count1;
	int count2;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (count1 = 0; s[count1] != '\0'; count1++)
	{
		for (count2 = 0; count2 <= 52; count2++)
		{
			if (s[count1] == alpha[count2])
			{
				s[count1] = rot[count2];
				break;
			}
		}
	}

	return (s);
}
