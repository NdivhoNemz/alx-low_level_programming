#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	/* (s + 1) represent inctrementation */
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
