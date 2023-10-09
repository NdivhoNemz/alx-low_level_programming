#include <stdio.h>

/**
 * main -  a program that prints the name of the file it was compiled from.
 * followed by a new line
 * Return: 0 (Success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
/**
 * The program uses the standard predifined macro __FILE__.
 * Standard predifned macro prints the name of the file it was compiled from
 */
