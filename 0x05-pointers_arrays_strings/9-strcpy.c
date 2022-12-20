#include "main.h"

/**
 * _strcpy - Check
 * @dest: string
 * @src: string
 * Return: Nothing
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
