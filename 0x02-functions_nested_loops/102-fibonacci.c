#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n1 = 1;
	long int n2 = 2;
	long int i;
	long int temp;

	printf("%li, ", n1);
	for (i = 0; i < 50; i++)
	{
		temp = n1 + n2;
		n1 = n2;
		n2 = temp;
		printf("%li, ", n1);
	}
	printf("%li\n", n2);
	return (0);
}
