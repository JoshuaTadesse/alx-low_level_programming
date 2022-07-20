#include "main.h"

/**
 * _puts_recursion - print a string.
 * @s: pointer to char
 * Return: No.
 */

void _puts_recursion(char *s)
{
	int i  = 0;

	if (*s == '\0')
		_putchar('\n');
	_putchar(*s);
	_puts_recursion(s + 1);
}
