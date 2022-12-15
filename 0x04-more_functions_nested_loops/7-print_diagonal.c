#include "main.h"

/**
 * print_diagonal - Check description
 * @n: input
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(92);
			if (i != n)
				_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
