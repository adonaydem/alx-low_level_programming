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
	int h = 0;
	int tmp[90];

	while (n >= 0)
	{
		tmp[i] = a[n-1];
		i++;
		n--;
	}
	while (tmp)
	{
		a[h] = tmp[h];
		h++;
	}
}
