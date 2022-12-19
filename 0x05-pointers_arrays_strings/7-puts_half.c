#include "main.h"

/**
 * puts_half - Check description
 * @str: String
 * Return: Returns the the length of string
 */
void puts_half(char *str)
{
	int i = 0;
	int count;
	int mid;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
		mid = (i / 2) + ;
	else
		mid = (i + 1) / 2;
	for (count = mid; count < i; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
