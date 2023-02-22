#include <stdio.h>
/**
 * main - prints first 50 Fibonacci numbers
 * Return: 0 Always
 */
int main(void)
{
	int i;
	float num1 = 0;
	float num2 = 1;
	float fibonacci;

	for (i = 0; i < 50; i++)
	{
		fibonacci = num1 + num2;
		printf("%f", fibonacci);

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
