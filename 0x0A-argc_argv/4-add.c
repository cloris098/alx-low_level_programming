#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the addition of positive numbers.
 * @argc: argument count/number.
 * @argv: argument vector , array of pointers to the arguments.
 * Return: Always 0 else 1 if error
 */

int main(int argc, char *argv[])
{
	int n, b, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (b = 0; argv[n][b] != '\0'; b++)
		{
			if (!isdigit(argv[n][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[n]);
	}
	printf("%d\n", sum);
	return (0);
}
