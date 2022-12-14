#include "main.h"

/**
 * _abs - Check description
 * @c: Check description
 * Description - function returns 1 if
 * the character is a letter and 0 otherwise
 * Return: 1 if is alphabet or 0 if otherwise
 */
int _abs(int c)
{
	int val;

	if (c >= 0)
	{
		val = c;
	}
	else
		val = c * (-1);

	return (val);
}
