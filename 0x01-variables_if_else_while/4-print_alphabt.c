#include <stdio.h>
/**
 * main - program that prints the alphabet without q and e
 *
 * Return: 0 Always
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha != 'e' && alpha != 'q')
putchar(alpha);
}
putchar('\n');
return (0);
}
