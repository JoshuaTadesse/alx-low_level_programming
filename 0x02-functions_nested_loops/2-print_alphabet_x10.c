#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet
 *
 * Description: prints alphabet
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c;

	for (int i = 0; i < 10; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	}
	_putchar('\n');
}

