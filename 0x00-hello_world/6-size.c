#include <stdio.h>

/**
 * main - C program that prints the size of various types.
 * Return: 0 (Always)
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

/* sizeof is a C operator used for storage in bytes */
/* %zu is used print the variables of size_t length */

	return (0);
}
