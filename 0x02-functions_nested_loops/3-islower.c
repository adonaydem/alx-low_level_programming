#include "main.h"

/**
 * _islower - Check description
 * @test - An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(char test)
{
	char i;
	int g = 0;

	for (i = 'a'; i <= 'z'; ++i)
		if (test == i)
			g = 1;
	return (g);
}
