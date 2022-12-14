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
	char val;

	val = c % 10;
	_putchar(val);
	return (val);
}
