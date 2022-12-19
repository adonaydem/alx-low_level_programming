#include "main.h"
#include <stdio.h>

/**
 * puts2 - Check description
 * @str: String
 * @n: number
 * Return: Returns the the length of string
 */
void print_array(int *a, int n)
{
	int count;

	n -= 1;
	for (count = 0; count <= n; count++)
	{
		printf("%d", a[count]);
		if (count != n)
		{
			printf("%s%s", ",", " ");
		}
	}
	printf("%s", "\n");
}
