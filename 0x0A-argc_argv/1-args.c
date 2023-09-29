#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
/* argv is unused as we are cointing arguments */
/* argc - 1 excludes the program name from the count */
	printf("%d\n", argc - 1);
	return (0);
}
