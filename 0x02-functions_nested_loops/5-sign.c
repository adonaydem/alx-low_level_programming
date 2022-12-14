#include "main.h"

/**
 * print_sign - Check description
 * @c - Check description
 * Description - function returns 1 if
 * the character is a letter and 0 otherwise
 * Return: 1 if is alphabet or 0 if otherwise
 */
int print_sign(int c)
{
	int val;

	if (c > 0)
	{
		_putchar('+');
		val = 1;
	}
	else if (c == 0)
	{
		_putchar('0');
		val = 0;
	}
	else
	{
		_putchar('-');
		val = -1;
	}
	return (val);
}
