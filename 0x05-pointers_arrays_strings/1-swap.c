#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: input integer pointer
 * @b: second input integer pointer
 *
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
