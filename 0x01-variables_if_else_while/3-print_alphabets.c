#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print lower and upper case alphabets
 * Return: Return )
 */

int main(void)

{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');
	return (0);
}
