#include "main.h"

/**
 * swap_int - Check description
 * @a: Check
 * @b: CHeck 2
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
