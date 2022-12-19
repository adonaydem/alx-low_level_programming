#include "main.h"

/**
 * puts2 - Check description
 * @str: String
 * Return: Returns the the length of string
 */
void puts2(char *str)
{
	int i = 0;
	int count;

	while (str[i] != '\0')
	{
		i++;
	}
	count -= 1;
	for (count = 0; count <= i; count += 2)
	{
			_putchar(str[count]);
	}
	_putchar('\n');
}
