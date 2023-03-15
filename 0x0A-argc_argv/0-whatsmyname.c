#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name
 * @argc: number of arguments supplied to program
 * @argv: array of arguments
 *
 * Return: Always 0 (Successful execution)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
