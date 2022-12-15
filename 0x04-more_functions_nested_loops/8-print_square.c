#include "main.h"

/**
 * print_square - Check description
 * @size: Input
 * Return: Nothing
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			if (size != i)
				_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
