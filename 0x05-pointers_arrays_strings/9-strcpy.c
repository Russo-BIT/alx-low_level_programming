#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 *@src: pointer to source string
 *@dest: pointer to destination of string
 *Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
