#include "main.h"

/**
 * print_most_numbers - Check description
 * Description - the function prints numbers
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			 _putchar(i);
	}
	_putchar('\n');
}
