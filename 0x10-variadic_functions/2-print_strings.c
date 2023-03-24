#include "variadic_function.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: separator string to print between the strings
 * @n: number of strings passed to the function
 * Return: if seperator is NULL, dont print
 * If any string is NULL, print (nil) instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list vl;

	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(vl, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(vl);
}
