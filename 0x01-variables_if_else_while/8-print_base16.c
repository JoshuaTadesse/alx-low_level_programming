#include <stdio.h>

/**
 * main - prints the phrase with proper grammar,
 * but the outcome is a piece of art,
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
