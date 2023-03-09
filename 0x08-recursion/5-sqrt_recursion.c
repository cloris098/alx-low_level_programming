#include "main.h"

/**
 * sqrt_find - checks for the square root of given number
 * @root: the number to check its root
 * @num: number to find sqrt of
 * Return: The sqrt of num or error
 */

int sqrt_find(int root, int num)
{
	if (root * root == num)
		return (root);
	if (root * root > num)
		return (-1);
	return (sqrt_find(root + 1, num));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find sqrt of
 * Return: natural square root or error
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (sqrt_find(1, n));
}
