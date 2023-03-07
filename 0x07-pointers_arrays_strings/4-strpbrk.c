#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that locates first occurence in string s
 * of any of the bytes in string accept
 * @s: string being searched
 * @accept: string containing bytes being searched for
 * Return: pointer to byte in s that matches bytes in accept,
 * or NULL if none found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
