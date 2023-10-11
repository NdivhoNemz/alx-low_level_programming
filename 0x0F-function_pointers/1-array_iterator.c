#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array elem on a newl
 * @array: pointer to an int array
 * @size: the size of the array
 * @action: function pointer takes an integer as argument and returns nothing.
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int counter;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (counter = 0; counter < size; counter++)
	{
		action(array[counter]);
	}
}
