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

	for (i = 0; i < 26; i++)
	{
		putchar(lower[i]);
	}
	putchar("\n");

	for (i = 0; i < 26; i++)
	{
		putchar(upper[i]);
	}
	putchar("\n");
	return (0);
}
