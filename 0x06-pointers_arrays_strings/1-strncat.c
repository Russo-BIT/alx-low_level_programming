#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings
 * @src: input string
 * @dest: input string
 * @n: input integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] <= n-1; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
