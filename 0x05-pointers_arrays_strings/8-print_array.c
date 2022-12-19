#include "main.h"

/**
 * puts2 - Check description
 * @str: String
 * @n: number
 * Return: Returns the the length of string
 */
void print_array(int *a, int n)
{
	int count;

	n -= 1;
	for (count = 0; count <= n; count++)
	{
		_putchar(a[count]);
		if (count != n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
