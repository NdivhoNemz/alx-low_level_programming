#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: string to be printed in reverse
 */

void print_rev(char *s)
{
	int length = 0;
	int rts;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (rts = length; rts > 0; rts--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
