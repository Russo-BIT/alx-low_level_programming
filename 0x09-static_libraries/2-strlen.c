#include "main.h"

/**
 * _strlen - function that calculates the length of a string
 * @s: input string
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
