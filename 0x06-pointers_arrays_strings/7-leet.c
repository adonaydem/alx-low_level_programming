#include "main.h"

/**
 * leet - check
 * @s: string
 * Return: 1337
 */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char ltr[10] = { 'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char sub[10] = { '4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == ltr[j])
				s[i] = sub[j];
		}
		i++;
	}
	return (s);
}
