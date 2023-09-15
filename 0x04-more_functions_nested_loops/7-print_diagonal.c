#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int diagonal_1, diagonal_2;

		for (diagonal_1 = 1; diagonal_1 < n; diagonal_1++)
		{
			for (diagonal_2 = 1; diagonal_2 < n; diagonal_2++)
			{
				if (diagonal_2 == diagonal_1)
				{
					_putchar('\\');
				}
				else if (diagonal_2 < diagonal_1)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
