#include "main.h"

/**
 * _abs -  function that computes the absolute value of an integer.
 * @x: value to convert to an absolute value.
 * Return: absolute value of an integer.
 */

int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (-x);
	}
}
