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
	int x;
	/* int x to be declared */
	/* x will hold last digit of n variable */

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	/* To find last digit of a number, we use modulo operator %. */
	/* When modulo divided by 10 returns its last digit. */

	if (n > 5)
		printf("Last digit of %d is %i and is greater than 5\n", n, x);
	else if (n == 0)
		printf("Last digit of %d is %i and is 0\n", n, x);
	else if (x < 6 && x != 0)
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n, x);

	return (0);
}
