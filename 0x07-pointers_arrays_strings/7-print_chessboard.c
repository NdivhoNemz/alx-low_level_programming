#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: an array to determine the rows
 */

void print_chessboard(char (*a)[8])
{
	int rows;
	int columns;

	for (rows = 0; rows < 8; rows++)
	{
		for (columns = 0; columns < 8; columns++)
			_putchar(a[rows][columns]);
		_putchar('\n');
	}
}
