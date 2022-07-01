#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 9; n++)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
	}
	putchar(9 + '0''\n');
	return (0);
}
