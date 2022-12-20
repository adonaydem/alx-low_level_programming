#include "main.h"

/**
 * rev_string - Check description
 * @s: String
 * Return: Returns the t
 * he length of string
 */
void rev_string(char *s)
{
	int i = 0;
	int c = 0;
	char tmp[99];

	while (s[i] != '\0')
	{
		tmp[i] = s[i];
		i++;
	}
	tmp[i] = s[i];
	while (i)
	{
		s[c] = tmp[--i];
		c++;
	}
}
