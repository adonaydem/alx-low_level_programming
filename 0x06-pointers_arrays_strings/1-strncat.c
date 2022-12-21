#include "main.h"

/**
 * _strncat - Check
 * @dest: string
 * @src: string
 * @n: integer
 * Return: Nothing
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int g = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[g] != '\0' && g < (n - 1))
	{
		dest[i] = src[g];
		i++;
		g++;
	}
	dest[i] = src[g];
	return (dest);
}
