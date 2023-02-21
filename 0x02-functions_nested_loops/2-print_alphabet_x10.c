#include "main.h"

/**
 * print_alphabet_x10 - check description
 *
 * Return - 0 (success)
 */

void print_alphabet_x10(void)
{
	char alp;
	int i = 0;

	for (i = 1; i <= 10; 1++)
	{
		for(alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
		_putchar('\n');
	}
}
