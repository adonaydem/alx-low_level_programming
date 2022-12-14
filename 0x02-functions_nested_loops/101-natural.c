#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int thr;
	int fiv;
	int sum;

	for (i = 0; i <= 500; i++)
	{
		thr = 3 * i;
		fiv = 5 * i;
		if (thr > 1024  || fiv > 1024)
		{
			break;
		}
		else
		{
			sum += thr;
			sum += fiv;
		}
	}
	return (0);
}
