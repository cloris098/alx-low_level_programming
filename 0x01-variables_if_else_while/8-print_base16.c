#include <stdio.h>
/**
 * main - prints numbers in base 16
 *
 * Return: 0 Always
 */
int main(void)
{
	char alpha;
	int i;
	int num;

	for (i = 0; i < 10; i++)
	{
		num = i % 10;
		putchar(num + '0');
	}

	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
