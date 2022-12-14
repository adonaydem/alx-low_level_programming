#include "main.h"

/**
 * times_table - Check description
 * Description - function returns 1 if
 * the character is a letter and 0 otherwise
 * Return: 1 if is alphabet or 0 if otherwise
 */
void times_table(void)
{
	int i;
	int g;

	for (i = 0; i <= 9; i++)
	{
		for (g = 0; g <= 9; g++)
		{
			if ((i * g) >= 10)
				_putchar(' ');
			_putchar((i * g) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
