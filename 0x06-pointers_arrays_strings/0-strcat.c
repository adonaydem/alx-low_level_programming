#include "main.h"

/**
 * _strcat - Check
 * @dest: string
 * @src: string
 * Return: Nothing
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int g = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[g] != '\0')
	{
		dest[i] = src[g];
		i++;
		g++;
	}
	dest[i] = src[g];
	return (dest);
}
