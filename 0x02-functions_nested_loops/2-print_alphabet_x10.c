#include "main.h"

/**
 * print_alphabet_x10 - Check description
 *
 * Return - Nothing
 */
void print_alphabet_x10(void)
{
	char i;
	int g = 0;

	while (g < 10)
	{
		for (i = 'a'; i <= 'z'; ++i)
			_putchar(i);
		g++;
		_putchar('\n');
	}
}
