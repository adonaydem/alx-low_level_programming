#include "main.h"

/**
 * print_rev - Check description
 * @s: String
 * Return: Returns the the length of string
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i)
	{
		_putchar(s[--i]);
	}
	_putchar('\n');
}
