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
	int index = strlen(dest);
	int i = 0;

	while (i < n && *src)
	{
		dest[index + i] = *src;
		src++;
		i++;
	}
	dest[index + i] = '\0';
	return (dest);
}
