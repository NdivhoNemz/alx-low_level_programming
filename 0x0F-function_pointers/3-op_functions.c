#include "3-calc.h"

/**
 * op_add - takes two integers as input and returns their sum.
 * @a: First integer.
 * @b: Second integer.
 * Return: The sum of int a and int b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - takes two integers as input and
 * returns the result of subtracting the second integer from the first.
 * @a: First integer.
 * @b: Second integer.
 * Return: The difference between int b minus int a.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - takes two integers as input and returns their product.
 * @a: First integer.
 * @b: Second integer.
 * Return: The product of two integers(a *b)
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides int a by b and return results.
 * @a: First integer.
 * @b: Second integer.
 * Return: the result of dividing the first integer by the second
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the reminder of the division of two integers(a and b)
 * @a: First integer.
 * @b: Second integer.
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
