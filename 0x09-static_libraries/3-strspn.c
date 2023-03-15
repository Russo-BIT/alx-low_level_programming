#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: segment to return number of bytes from
 * @accept: bytes to be included
 * Return: number of bytes in initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int x = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					x++;
			}
		}
		else
			return (x);

	}
	return (x);
}
