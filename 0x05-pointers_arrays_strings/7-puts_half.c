#include "main.h"

/**
 * puts_half - function thar prints the second half of a string
 *@str:input string
 */

void puts_half(char *str)
{
	int len, i, n;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	n = (len - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
