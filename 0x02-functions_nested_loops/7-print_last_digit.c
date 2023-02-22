#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the integer to get the last digit
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int remainder;

if (n < 0)
{
n = -n;
}	
remainder = n % 10;

_putchar(remainder + '0');
return (remainder);
}
