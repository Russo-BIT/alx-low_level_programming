#include <stdlib.h>
#include "main.h"

/**
* _strstr - function that locates a substring
* @haystack: string being searched
* @needle: substring to search for
* Return: a pointer to beginning of located substring,
* or NULL if substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int x = 0;

	while (needle[x] != '\0')
		x++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != x)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
