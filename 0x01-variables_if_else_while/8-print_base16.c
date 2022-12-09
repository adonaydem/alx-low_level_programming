#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int g;

	for (g = '0'; g <= '9'; ++g)
		putchar(g);
	for (c = 'a'; c <= 'f'; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}
