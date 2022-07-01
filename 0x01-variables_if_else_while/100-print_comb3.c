#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		j = 0;

		for (j = 0; j < 10; j++)
		{
			if (j > i)
			{			
				putchar(i + '0');
				putchar(j + '0');
				if (i == 8 && j == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
