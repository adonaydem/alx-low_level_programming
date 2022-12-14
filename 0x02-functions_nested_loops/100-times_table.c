#include "main.h"

/**
 * print_times_table - Check description
 * @n: Check description
 * Description - function returns 1 if
 * the character is a letter and 0 otherwise
 * Return: 1 if is alphabet or 0 if otherwise
 */
void print_times_table(int n)
{
	if (n > 0 && n < 15)
	{
		int i;
		int g;

		for (i = 0; i <= n; i++)
		{
			for (g = 0; g <= n; g++)
			{
				if (((i * g) / 10) == 0)
				{
					if (g != 0)
					{
						_putchar(' ');
					}
				}
				else
				{
					_putchar(((i * g) / 10) + '0');
				}
				_putchar(((i * g) % 10) + '0');
				if (g != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
