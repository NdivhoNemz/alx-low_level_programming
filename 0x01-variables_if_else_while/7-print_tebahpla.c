#include <stdio.h>

/**
 * main - Print in alphabetical order
 * Return: Return 0
 */

int main(void)
{
	char alphabet;
	/* alphabet = 'z' begings to print at letter 'z' */
	/* alphabet >= 'a' will end print at letter 'a' */
	/* alphabet++ will decrease 'z' one letter at a time until 'a' */

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');
	/* putchar to be on a new line */

	return (0);
}
