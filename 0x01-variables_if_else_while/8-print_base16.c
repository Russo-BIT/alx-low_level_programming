#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char alp;

	for (i = '0'; i < '10'; i++)
		putchar(i);
	for (alp = 'a'; alp <= 'f'; alp++)
		putchar(alp);

	return (0);
}

