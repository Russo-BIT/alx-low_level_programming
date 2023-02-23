#include "main.h"
#include <stdio.h>

/**
 * print_line - function that prints line in terminal
 * @n: input integer
 * Return: Always 0
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
