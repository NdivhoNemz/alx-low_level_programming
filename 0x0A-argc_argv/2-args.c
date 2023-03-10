#include <stdio.h>
#include "main.h"

/**
 * main - All arguments should be printed, including the first one
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
		;
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
