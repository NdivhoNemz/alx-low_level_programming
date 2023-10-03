#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function returns a pointer to 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 * Return: If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)

{
	int **arr;
/* a pointer to a pointer of type int */
	int counter1, counter2;
/* variables are often used as counters or indices in loops */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (counter1 = 0; counter1 < height; counter1++)
	{
		arr[counter1] = malloc(sizeof(int) * width);
		if (arr[counter1] == NULL)
		{
			for (; counter1 >= 0; counter1--)
			{
				free(arr[counter1]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (counter1 = 0; counter1 < height; counter1++)
	{
		for (counter2 = 0; counter2 < width; counter2++)
		{
			arr[counter1][counter2] = 0;
		}
	}
	return (arr);
}
