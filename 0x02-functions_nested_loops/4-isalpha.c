#include "main.h"

/**
 * _isalpha - Check description
 * @c: Check description
 * Description - function returns 1 if
 * the character is a letter and 0 otherwise
 * Return: 1 if is alphabet or 0 if otherwise
 */
int _isalpha(int c)
{
	char i;
	int g = 0;

	for (i = 'a'; i <= 'z'; ++i)
		if (c == i)
			g = 1;
	for (i = 'A'; i <= 'Z'; ++i)
		if (c == i)
			g = 1;
	return (g);
}
