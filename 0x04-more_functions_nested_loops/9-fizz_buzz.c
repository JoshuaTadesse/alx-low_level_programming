#include "main.h"
#include <stdio.h>
/**
 * main - Entry piont
 * Return: Always 0
 */
int main(void)
{
	int n;
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	return (0);
}
