#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int triangle_1, triangle_2;

		for (triangle_1 = 1; triangle_1 <= size; triangle_1++)
		{
			for (triangle_2 = 1; triangle_2 <= size; triangle_2++)
			{
				_putchar(' ');
			}
			for (triangle_2 = 1; triangle_2 <= triangle_1; triangle_2++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
