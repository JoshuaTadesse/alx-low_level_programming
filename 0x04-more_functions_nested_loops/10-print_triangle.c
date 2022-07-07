#include "main.h"

/**
 * print_triangle -  a function that prints a triangle, followed by a new line.
 * @size: An input integer
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size; j > 0; j--)
			{
				if (j > i)
					_putchar(' ');
				else
					_putchar('#');
			}
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
