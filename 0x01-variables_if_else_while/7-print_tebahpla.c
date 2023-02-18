#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0 Always
 */
int main(void)
{
	char revAlpha;

	for (revAlpha = 'z'; revAlpha >= 'a'; revAlpha--)
	{
		putchar(revAlpha);
	}
	putchar('\n');
	return (0);
}
