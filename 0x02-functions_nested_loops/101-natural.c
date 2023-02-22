#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: computes the sum of all multiples of 3 or 5 below 1024
 * Return: 0 Always
 */
int main(void)
{
	int i = 0;
	int sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
