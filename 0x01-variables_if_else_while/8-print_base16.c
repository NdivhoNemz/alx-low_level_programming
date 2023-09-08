#include <stdio.h>

/**
 * main - a program that prints all the numbers of base 16
 * Numbers printed in lowercase
 * Return: 0
 */

int main(void)
{
	/**
	 * Hexadecimal number system has a base value equal to 16.
	 * Hexadecimal numbers are represented by only 16 symbols.
	 * The symbols or values are 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E and F
	 * Each digit represents a decimal value.
	 */

	int numbers;
	/* int numbers represent 0-9 of hexidecimal number system */
	char alphabets;
	/* char alphabets represents A-F of hexidecimal number system */

	for (numbers = '0'; numbers <= '9'; numbers++)
		putchar(numbers);

	for (alphabets = 'a'; alphabets <= 'f'; alphabets++)
		putchar(alphabets);
	putchar('\n');

	/* putchar to print numbers first then alphabets */

	return (0);
}
