#include "main.h"

/**
 * puts2 - Check description
 * @str: String
 * Return: Returns the the length of string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
		--i;
	}
}
