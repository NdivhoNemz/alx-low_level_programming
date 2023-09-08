#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number stored in the variable n.
 * Return: 0
 */

int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

	if (n > 5)
		printf("Last digit of %d is %i and is greater than 5\n", n, digit);
	else if (n == 0)
		printf("Last digit of %d is %i and is 0\n", n, digit);
	else if (n < 6 && n != 0)
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n, digit);

	return (0);
}
