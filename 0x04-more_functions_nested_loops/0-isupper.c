#include "main.h"

/**
 * _isupper - Check description
 * @c: Input number
 * Description - the function returns 1 if input is uppercase
 * Return: 1 or 0
 */
int _isupper(int c)
{
	char i;
	int val;

	val = 0;
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			val = 1;
		}
	}
	return (val);
}
