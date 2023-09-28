#include "main.h"

/**
 * _pow_recursion - a function returns the value of x raised to the power of y
 * @x: value to increment (recursive call)
 * @y: int used as the power.
 * Return: result of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
/* (x ^ y - 1) x to the power y minus 1 for recursive purposes */
	return (x * _pow_recursion(x, y - 1));
}
