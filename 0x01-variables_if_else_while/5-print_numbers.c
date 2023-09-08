#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */

int main(void)
{
	int numbers;

	/**
	 * numbers = '0' begings print from number '0'
	 * numbers <= '10' will end print at number '9'
	 * number++ will increase '0' one digit at a time until '9'
	 */
	for (numbers = 0; numbers < 10; numbers++)
		printf("%d", numbers);
	/**
	 * "%d" is a format specifier.
	 * "%d" act as a placeholder for an integer argument.
	 */

	printf("\n");
	/* "\n" prints on a new line */

	return (0);
}
