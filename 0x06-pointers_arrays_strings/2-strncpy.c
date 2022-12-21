
#include "main.h"

/**
 * _strncpy - Check
 * @dest: string
 * @src: string
 * @n: integer
 * Return: Nothing
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < (n - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
