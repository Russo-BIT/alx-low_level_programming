#include "main.h"

int tmp_prime(int n, int i);

/**
 * divisors - checks if number is prime
 * @n: integer
 * @m: integer
 * Return: if number is prime
 */

int divisors(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divisors(n + 2, m));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 * @n: integer
 * Return: if number is prime
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3, n));
	}
}
