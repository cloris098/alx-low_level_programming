#include <stdio.h>
/**
 * main - program that prints alphabet in lowercase and uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char lower[26] = "abcdefghijklmnopqrstuvwxyz";
	char upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int x;

	for (i = 0; i < 26; i++)
	{
		putchar(lower[i]);
	}

	for (x = 0; x < 26; x++)
	{
		putchar(upper[x]);
	}
	putchar("\n");
	return (0);
}
