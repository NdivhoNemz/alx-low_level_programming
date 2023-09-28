#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number.
 * @n: evaluated numnber
 * Return: 1 for prime number, otherwise 0
 */

int is_prime_number(int n)
	/* set base */
{
	if (n <= 1)
	{
		return (0); /* not a prime number */
	}
	return (true_prime(n, n - 1));
}

/**
 * true_prime - recursively calculate prime number
 * @n: evaluated number
 * @i: iterator
 * Return: 1 for n if prime, 0 if otherwise
 */

int true_prime(int n, int i)
{
	if (i == 1)
	{
		return (1); /* true prime number */
	}
	/* prime numbers do not have any remainder */
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (true_prime(n, i - 1));
} /* NN */
