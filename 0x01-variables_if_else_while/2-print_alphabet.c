#include <stdio.h>
/**
 * main - program that prints alphabet in lowercase and uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char lower = "a";
	char upper = "A";

	while (lower <= "z")
	{
		putchar(lower);
		lower++;
	}
	while (upper <= "Z")
	{
		putchar(upper);
		upper++;
	}
	putchar("\n");
	return (0);
}
