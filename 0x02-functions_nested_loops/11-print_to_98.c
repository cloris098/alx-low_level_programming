#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all numbers to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
		while (n > 98)
		{
			printf("%d, ", n--);
			printf("%d\n", n);
		}

		while (n < 98)
		{
			printf("%d, ", n++);
			printf("%d\n", n);
		}
}
