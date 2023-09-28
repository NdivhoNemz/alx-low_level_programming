#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: factorial is extracted from n
 * Return: factorial of n
 */

int factorial(int n)
{
/* factorial of '0!' and '1!' is '1' */
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
