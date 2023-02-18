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
	int m, p, q;

	for (m = '0'; m < '9'; m++)
	{
		for (p = m + 1; p <= '9'; p++)
		{
			for (q = p + 1; q <= '9'; q++)
			{
				if ((p != m) != q)
				{
					putchar(m);
					putchar(p);
					putchar(q);

					if (m == '7' && p == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
