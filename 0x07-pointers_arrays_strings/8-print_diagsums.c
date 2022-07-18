#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints sums
 * @a: a pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	long int sum1 = 0;
	long int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + a[i][j];
			}
		}

		for (j = (size - 1); j >= 0; j--)
		{
			if (i == j)
				sum2 = sum2 + a[i][j];
		}
	}

	printf("%ld", sum1);
	printf("%ld", sum2);
}
