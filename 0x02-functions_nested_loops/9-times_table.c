#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int a, b, t;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			t = a * b;
			if (b == 0)
			{
				_putchar(t + '0');
			}
			if (t < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(t + '0');
			}
			else if (t >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
