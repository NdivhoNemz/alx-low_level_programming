#include "main.h"

/**
 * more_numbers -  a function that prints 10 times the numbers,
 */

void more_numbers(void)
{
	int times;
	int numbers;

	for (times = 0; times < 10; times++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers >= 10)
			_putchar((numbers / 10) + '0');
			_putchar((numbers % 10) + '0');
		}
	_putchar('\n');
	}
}
