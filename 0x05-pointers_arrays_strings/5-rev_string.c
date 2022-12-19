#include "main.h"

/**
 * rev_string - Check description
 * @s: String
 * Return: Returns the the length of string
 */
void rev_string(char *s)
{
	int i = 0;
	int c = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i)
	{
		s[c] = s[--i];
		c++;
	}
}
