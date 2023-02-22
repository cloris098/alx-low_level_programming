#include <stdio.h>
/**
 * main - prints first 50 Fibonacci numbers
 * Return: 0 Always
 */
int main(void)
{
	int i;
	unsigned long num1 = 0;
	unsigned long num2 = 1;
	unsigned long fibonacci;

	for (i = 0; i < 50; i++)
	{
		fibonacci = num1 + num2;
		printf("%lu", fibonacci);

		num1 = num2;
		num2 = fibonacci;

		if (i == 49)
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
		}
	}
	return (0);
}
