#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum value stored in the array
 * @max: maximum value stored in the array
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *pointer;
	int counter, range;

	if (min > max)
	{
		return (NULL);
	}
	range = max - min + 1;

	pointer = malloc(sizeof(int) * range);
	/* NULL - represents a null pointer */
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (counter = 0; min <= max; counter++)
	{
		pointer[counter] = min++;
	}
	return (pointer);
}
/**
 * range - is a variable that holds the total number of elements in the array
 * It is calculated as "max - min + 1"
 * This represents the range of values from min to max, inclusive.
 */
