#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function given as parameter on each element of an array.
 * @array: pointer to an int array
 * @size: the size of the array
 * @action: function pointer takes an integer as argument and returns nothing.
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int counter;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (counter = 0; counter < size; counter++)
	{
		action(array[counter]);
	}
}
