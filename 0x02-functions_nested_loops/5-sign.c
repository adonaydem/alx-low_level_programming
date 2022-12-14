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
	if (c > 0)
		_putchar('+');
	if (c == 0)
		_putchar('0');
	else
		_putchar('-');
	return (0);
}
