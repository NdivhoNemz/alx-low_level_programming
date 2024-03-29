#include "main.h"

/**
 * _sqrt_recursion - a function returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /* error returned */
	}
	return (new_sqrt_recursion(n, 0));
}

/**
 * new_sqrt_recursion - recurses to find the natural square root of n
 * @n: square root to be calculated
 * @i: iterator (square root)
 * Return: the actual square root
 */

int new_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i); /* natural number */
	}
	return (new_sqrt_recursion(n, i + 1));
}
