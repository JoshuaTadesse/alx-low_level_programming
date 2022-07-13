#include "main.h"
#include <string.h>
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int i = 0, j = 0;
	int size = strlen(s);
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if ((*(s + i) > 97) && (*(s + i) < 122))
		*(s + i) = *(s + i) - 32;
	count++;
	for (i = 1; i < size; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (*(s + i - 1) == sep[j])
			{
				if ((*(s + i) >= 97) && (*(s + i) <= 122))
					*(s + i) = *(s + i) - 32;
				break;
			}
		}
	}
	return (s);
}
