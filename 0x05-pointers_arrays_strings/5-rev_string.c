#include "main.h"

/**
 * rev_string - function that reverses a string
 *@s: input string
 */

void rev_string(char *s)
{
	int length = 0, i = 0;
	char aux;

	while (s[length] != '\0')
		length++;

	while (i < length--)
	{
		aux = s[i];
		s[i++] = s[length];
		s[length] = aux;
	}
}
