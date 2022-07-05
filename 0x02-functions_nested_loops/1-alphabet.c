#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Description: prints alphabet
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
