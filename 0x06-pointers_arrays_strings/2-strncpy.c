#include "main.h"

/**
 * _strncpy - function that copies a string
 * @src: input string
 * @dest: input string
 * @n: input integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0, j = 0; dest[i] != '\0' || src[j] != '\0'; i++, j++)
	{
		if (dest[i] == src[j])
		{
			continue;
		}
		else
		{
			n = dest[i] - src[j];
		}
		return n;
	}
	return (0);
}
