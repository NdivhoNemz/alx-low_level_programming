#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 * @size: the size of the square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int hashtag_1, hashtag_2;

		for (hashtag_1 = 0; hashtag_1 < size; hashtag_1++)
		{
			for (hashtag_2 = 0; hashtag_2 < size; hashtag_2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
