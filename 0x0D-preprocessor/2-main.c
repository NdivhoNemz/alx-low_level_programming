#include <stdio.h>

/**
 * main - aprogram that prints the name of the file it was compiled from.
 * followed by a new line
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	char *filename = __FILE__;

	for (i = 0; filename[i] != '\0'; i++)
	{
		putchar(filename[i]);
	}
	putchar('\n');
	return (0);
}
