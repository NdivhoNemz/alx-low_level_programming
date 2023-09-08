#include <stdio.h>

/**
 * main - a program that prints all single digit numbers
 * Numbers of base 10
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

	for (numbers = '0'; numbers <= '9'; numbers++)
		putchar(numbers);

	putchar('\n');
	/* "\n" prints on a new line */

	return (0);
}
