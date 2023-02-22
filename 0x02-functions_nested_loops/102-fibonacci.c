#include <stdio.h>
/**
 * main - prints first 50 Fibonacci numbers
 * Return: 0 Always
 */
int main(void)
{
	int i;
	int num1 = 0;
	int num2 = 1;
	int fibonacci;

	for (i = 0; i < 50; i++)
	{
		fibonacci = num1 + num2;
		printf("%d, ", fibonacci);

		num1 = num2;
		num2 = fibonacci;

		if (i == 49)
		{
			printf('\n');
		}
	}
}
