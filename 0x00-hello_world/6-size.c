#include <stdio.h>
/**
 * main - C program that prints the size of various types on the computer it is compiled and run on.
 *
 * return - Always (0) Success
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
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(lnum));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(l2num));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(dec));
return (0);
}
