#include "main.h"

/**
 * _isdigit - Check description
 * @c: Input number
 * Description - the function returns 1 if input is digit
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	char i;
	int val;

	val = 0;
	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
		{
			val = 1;
		}
	}
	return (val);
}
