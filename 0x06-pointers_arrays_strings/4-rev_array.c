#include "main.h"

/**
 * reverse_array - check
 * @a: array
 * @n: integer
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int h;

	while (i < n--)
	{
		h = a[i];
		a[i++] = a[n];
		a[n] = h;
	}
}
