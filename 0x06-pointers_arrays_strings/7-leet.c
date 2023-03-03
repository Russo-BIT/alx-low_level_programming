#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: input string
 * Return: enconde string
 */

char *leet(char *s)
{
	int i;
	int j;
	int k;

	char x[] = "oOlLeEaAtT";
	char y[] = "0011334477";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (x[j] != '\0')
		{
			if (s[i] == x[j])
			{
				k = j;
				s[i] = y[k];
			}
			j++;
		}
		i++;
	}
	return (s);
}
