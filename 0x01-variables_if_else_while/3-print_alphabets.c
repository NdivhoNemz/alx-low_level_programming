#include <stdio.h>

/**
 * main - Print lower and upper case alphabets
 * Return: Return 0
 */

int main(void)
{
	char alphabet;

	/**
	 * alphabet = 'a' begings print at letter 'a'
	 * alphabet <= 'z' will end print at letter 'z'
	 * alphabet++ will increase 'a' one letter at a time until 'z'
	 */

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	/**
	 * alphabet = 'A' begings print at letter 'A'.
	 * alphabet <= 'Z' will end print at letter 'Z'.
	 * alphabet++ will increase 'A' one letter at a time until 'Z'.
	 */

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);
	/**
	 * Variable "alphabet" is used for both lowwer and upper case
	 * This is to enusre both alphabets are printed in unison.
	 */

	putchar('\n');
	/* putchar to be on a new line */

	return (0);
}
