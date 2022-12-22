#include "main.h"

/**
 * string_toupper - Check
 * @str: lop
 * Return: Uppercase
 */
char *string_toupper(char *str)
{
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
