#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all numbers to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
       if(n == 98)
	{
	       	printf("%d", n);
	}

	       while (n < 99)
	{
	       	printf("%d, ", n++);
	}

	       while (n > 97)
       {
	       printf("%d, ", n--);
       }
}
