#include "main.h"

/**
   * more_numbers - function that prints 10 times the numbers
   * Return: Always 0
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	for (; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
