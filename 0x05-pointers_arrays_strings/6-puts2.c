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
	for (count = 0; count <= i;count++)
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
	}
}
