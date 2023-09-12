#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 * return: 0
 */

void print_alphabet_x10(void)
{
	char alphabets;
	int t;

	t = 0;
	while (t < 10)
	{
		alphabets = 'a';
		while (alphabets <= 'z')
		{
			_putchar(alphabets);
			alphabets++;
		}
	_putchar('\n');
	t++;
	}
}
