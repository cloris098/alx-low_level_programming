#include <stdio.h>
/**
 * main - program that prints the alphabet without q and e
 *
 * Return: 0 Always
 */
int main(void)
{
	char alpha = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alpha[i]);
	}
	putchar("\n");
	return (0);
}
