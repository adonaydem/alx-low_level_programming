#include "main.h"

/**
 * _strlen - Check description
 * @s: String
 * Return: Returns the the length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
