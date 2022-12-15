#include "main.h"

/**
 * more_numbers - Check description
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int i;
	int g;

	for (g = 0; g < 9; ++g)
	{
		for (i = '0'; i <= '14'; ++i)
			_putchar(i);
		_putchar('\n');
	}
}
