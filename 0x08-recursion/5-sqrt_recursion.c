#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - main funct
 * @n: int n
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	double sr = sqrt(n);

	if (sr % 0.1)
		return (-1);
	return (sr);
}
