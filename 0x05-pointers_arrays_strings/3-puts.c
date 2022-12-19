#include "main.h"

/**
 * _puts - Check description
 * @str: String
 * Return: Returns the the length of string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
