#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: pointer to an array
 * @size: size of the array
 * @cmp: takes an integer as an argument and returns an integer(-1).
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (counter = 0; counter < size; counter++)
	{
		if (cmp(array[counter]))
		{
			return (counter);
		}
	}
	return (-1);
}
