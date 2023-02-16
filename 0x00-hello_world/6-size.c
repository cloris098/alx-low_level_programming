#include <stdio.h>
/**
 * main - program that prints the size of various types on the computer
 *
 * Return: (0) Success
 */
int main(void)
{
	char ch;
	int num;
	long int lnum;
	long long int l2num;
	float dec;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(ch));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(num));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lnum));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l2num));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(dec));
return (0);
}
