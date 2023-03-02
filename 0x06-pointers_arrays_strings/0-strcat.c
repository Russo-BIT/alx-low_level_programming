#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: input string
 * @dest: input string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (int j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
