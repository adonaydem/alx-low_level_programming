#include "main.h"

/**
 * print_last_digit - Check description
 * @c: Check description
 * Description - function returns the
 * last digit of a number
 * Return: The last digit
 */
int print_last_digit(int c)
{
	int val;

	if (c < 0)
		val = (c % 10) * (-1);
	else
		val = c % 10;

	_putchar(val + '0');
	return (val);
}
