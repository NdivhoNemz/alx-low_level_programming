#include <stdio.h>
#include <unistd.h>

/**
 * main - A C program that prints exactly
 * Return: 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	/* used write as functions listed in printf or puts are prohibited */
	/* 2 is a file descritpor used for standard error */
	/* 59 the length of the string + 1, (+ 1 = special char '\0')*/
	/* return ?????? */
	/* return value above 0 is an error */

	return (1);
}
