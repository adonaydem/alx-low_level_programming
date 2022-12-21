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
	int h = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i] != '\0')
		h++;
	while (src[g] != '\0' && g < (n -1))
	{
		dest[i] = src[g];
		i++;
		g++;
	}
	if (h >= n)
		dest[i] = src[g];
	return (dest);
}
