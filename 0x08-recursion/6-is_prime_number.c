#include "main.h"

/**
 * checks_prime - checks to see if number is prime
 * @div: number to perform check
 * @num: number to check
 * Return: 1 if prime, else 0
 */

int checks_prime(int div, int num)
{
	if (num < 2 || num % div == 0)
		return (0);
	else if (div > num / 2)
		return (1);
	else
		return (if_prime(div + 1, num));
}

/**
 * is_prime_number - checks if number is a prime or not
 * @n: number to check
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (checks_prime(2, n));
}
