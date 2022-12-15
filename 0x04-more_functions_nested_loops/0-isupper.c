#include "main.h"

/**
 * _isupper - Check description
 * @c: Input number
 * Description - the function returns 1 if input is uppercase
 * Return: 1 0r 0
 */
int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
		else
			return (0);
	}
}
