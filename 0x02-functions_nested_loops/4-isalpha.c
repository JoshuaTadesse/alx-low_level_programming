#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks for lowercase
 * @c: c is an ascii character
 *
 * Return: 1 if lowercase
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
		return (0);
	else
		return (1);
}
