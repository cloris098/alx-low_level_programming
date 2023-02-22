#include <stdio.h>
/**
 * main - prints the sum of even fibonacci numbers not above 4000000
 *
 * Return: 0 Always
 */
int main(void)
{
	int fib1 = 0;
	int fib2 = 1;
	int fibonacci = 0;
	int fibsum = 0;

	while (fibonacci < 4000000)
	{
		fibonacci = fib1 + fib2;
		fib1 = fib2;
		fib2 = fibonacci;
		if (fibonacci % 2 == 0)
		{
			fibsum += fibonacci;
		}
	}
	printf("%i\n", fibsum);
	return (0);
}
