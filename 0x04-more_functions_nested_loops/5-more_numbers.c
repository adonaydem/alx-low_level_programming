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

	for (g = 0; g < 9; g++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i / 10 + '0');
		}
		_putchar('\n');
	}
}
