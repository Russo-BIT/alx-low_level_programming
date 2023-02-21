#include "main.h"

/**
 * main - prints _putchar, followd by a new line
 * Return: Always 0 (Successful execution)
 */

int main(void)
{
	char word[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(word[c]);
	}

	_putchar('\n');

	return (0);
}
