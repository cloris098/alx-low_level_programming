#include "main.h"
/**
 * puts2 - prints every other character of string
 * @str: string to prints its character
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;

	if ((i % 2) == 0)
		_putchar(str[i]);
	else
		continue;
	}
	_putchar('\n');
}
