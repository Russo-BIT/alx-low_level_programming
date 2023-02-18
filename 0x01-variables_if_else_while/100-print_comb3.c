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
	int q, p;

	for (q = '0'; q < '9'; q++)
	{
		for (p = q + 1; p <= '9'; p++)
		{
			if (p != q)
			{
				putchar(q);
				putchar(p);

				if (q == '8' && p == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
