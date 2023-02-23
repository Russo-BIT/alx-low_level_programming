#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line in the terminal.
 * @n: input integer
 * Return: Always 0
*/

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n > 0)
	{
		while (i < n)
		{
			while (j < a)
			{
				_putchar(' ');
				j++;
			}
			i++;
			j = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
