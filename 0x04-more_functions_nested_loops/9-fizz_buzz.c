#include <stdio.h>

/**
 * main - prints numbers from 1 to 100,
 *        any numbers which is multiple of 3, print Fizz,
 *        any numbers which is multiple of 5 print Buzz,
 *        numbers both multiple of 3 & 5,print FizzBuzz.
 *
 * Return: 0 if true.
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", number);
		}
		if (number != 100)
		{
		printf(" ");
		}
	}
	printf("\n");

	return (0);
}
