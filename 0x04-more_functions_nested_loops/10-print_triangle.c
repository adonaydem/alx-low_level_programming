#include "main.h"

/**
 * print_triangle - Check description
 * @size: variable
 * Return: Nothing
 */
void print_triangle(int size)
{
	int i, j, k;
	int cow;

	if (size > 0)
	{
		cow = size - 1;
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < cow; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
				_putchar(35);
			--cow;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
