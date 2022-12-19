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
	int b = 0;
	int c = 0;
	char *tmp;

	while (s[i] != '\0')
	{
		i++;
		tmp[b] = s[i];
		b++;
	}
	while (i)
	{
		s[c] = tmp[--i];
		c++;
	}
}
