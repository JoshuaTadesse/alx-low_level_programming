#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int count, mid, f, l, max;

	mid = max / 2;
	while (mid != 0)
	{
		f = a[max - mid];
		l = a[mid];
		a[max - mid] = l;
		a[mid] = f;
		mid--;
	}
}
