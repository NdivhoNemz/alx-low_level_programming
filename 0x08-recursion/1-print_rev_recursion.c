#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: The string to be printed.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
/* _putchar('\n'); is not used as 1-main.c has a new line included */
}
