#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - bytes
 * @s: pointer to char
 * @accept: pointer to char
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
