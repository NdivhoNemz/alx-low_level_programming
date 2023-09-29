#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int i;
/* i = 0 and not 1 because we are including the program name */
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
/* %s is recieved from argv[i] */
/* %s\n will print one arg per line */
	}
	return (0);
}
