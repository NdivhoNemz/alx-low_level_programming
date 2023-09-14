#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: the number of times the character _ should be printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int lines;

		for (lines = 1; lines <= n; lines++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
