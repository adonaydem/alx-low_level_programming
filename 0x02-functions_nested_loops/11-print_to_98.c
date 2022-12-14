#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Check description
 * @c: Check description
 * Description - function returns 1 if
 * the character is a letter and 0 otherwise
 * Return: 1 if is alphabet or 0 if otherwise
 */
void print_to_98(int c)
{
	int i;

	if (c >= 98)
	{
		for (i = c; i >= 98; --i)
			printf("%d, ", i);
	}
	else if (c < 98)
	{
		for (i = c; i <= 98; ++i)
			printf("%d, ", i);
	}
}
