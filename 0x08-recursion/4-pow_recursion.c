#include "main.h"

/**
 * _pow_recursion - pow recursion
 * @x: integer params
 * @y: integer paramtr
 * Return: recursion
 */


int _pow_recursion(int x, int y)
{
	int i = y;

	if (i < 0)
		return (-1);
	return (pow(x, y));
}
