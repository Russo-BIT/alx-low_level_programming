#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: Always 0 (Successful execution)
 */
int ain(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

