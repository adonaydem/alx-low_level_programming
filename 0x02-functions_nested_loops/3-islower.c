#include "main.h"

/**
 * _islower - Check description
 * @test: An input character 
 * Return: 1 or 0
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
