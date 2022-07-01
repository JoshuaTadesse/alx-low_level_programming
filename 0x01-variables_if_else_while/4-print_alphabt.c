#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c != 'q' && c!= 'e' && c <= 'z')
		putchar(c);
	putchar('\n');
	return (0);
}

