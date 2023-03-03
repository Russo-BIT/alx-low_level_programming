#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: input string
 * @s2: input string
 * Return: difference of s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	int rev = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		rev = *s1 - *s2;

	return (rev);
}
