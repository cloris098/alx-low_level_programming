#include <stdio.h>
/**
 * main - program that prints alphabet in lowercase and uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int c;

	for (c = 0; c < 26; c++)
	{
		putchar(alpha[c]);
	}
	putchar('\n');
	return (0);
}
