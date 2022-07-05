#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int i;
	int temp;

	printf("%d, ", n1);
	for (i = 0; i < 50; i++)
	{
		temp = n1 + n2;
		n1 = n2;
		n2 = temp;
		printf("%d, ", n1);
	}
	printf("%d\n", n2);
	return (0);
}
