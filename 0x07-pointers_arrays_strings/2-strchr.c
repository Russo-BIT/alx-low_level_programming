#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: input string
 * @c: character being located
 * Return: pointer to first occurence of c in string
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
