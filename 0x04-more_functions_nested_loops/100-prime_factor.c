#include <stdio.h>

/**
 * main - Check
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;
	int test;
	int val;
	long int num = 612852475143;

	for (i = 2; i < (num / 2); i++)
	{
		if ((num % i) == 0)
		{
			test = 0;
			for (j = 2; j <= 9; j++)
			{
		     		if ((i % j) != 0)
					test += 1;
			}
		}
		if (test == 8)
			val = i;
	}
	printf("%d", val);

	return (0);
}
