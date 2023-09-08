#include <stdio.h>

/**
 * main - program prints the alphabet in lowercase, followed by a new line.
 * Program must exclude 'q' and 'e'
 * Return: 0
 */

int main(void)

{
	char alphabet, letter_q, letter_e;

	letter_e = 'e';
	letter_q = 'q';

	/**
	 * alphabet = 'a' begings print at letter 'a'
	 * alphabet <= 'z' will end print at letter 'z'
	 * alphabet++ will increase 'a' one letter at a time until 'z'
	 */
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != letter_e && alphabet != letter_q)
			putchar(alphabet);
		/* putchar will only print "alphabet" if 'e' and 'q' are excluded */
	}
	putchar('\n');

	return (0);
}
