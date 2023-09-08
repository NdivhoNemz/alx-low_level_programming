#include <stdio.h>

/**
 * main - Print in alphabetical order
 * Return: Return 0
 */

int main(void)
{
	char alphabet;
	/* alphabet = 'a' begings print at letter 'a' */
	/* alphabet <= 'z' will end print at letter 'z' */
	/* alphabet++ will increase 'a' one letter at a time until 'z' */

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	/* putchar to be on a new line */

	return (0);
}
