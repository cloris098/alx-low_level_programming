#include "main.h"

/**
 * factorial - prints the factorial of a given number
 * @n: number to get its factorial
 * Return: @n else error if n is less than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
