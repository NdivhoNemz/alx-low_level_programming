#include <stdio.h>

/**
 * main - a program prints all possible combinations of single-digit numbers.
 * Return: 0
 */

int main(void)
{
	int numbers;

	/**
	 * numbers = '0' begings print from number '0'
	 * numbers <= '9' will end print at number '9'
	 * number++ will increase '0' one digit at a time until '9'
	 */
	for (numbers = '0'; numbers <= '9'; numbers++)
		putchar(numbers);

	/**
	 * "numbers != '9'" is used to set to set comma and space
	 * after every number other than '9'
	 * The ',' and the ' ' represent the seperation between the numbers
	 * This willcome after each number from 0-8
	 */
	if (numbers != '9')
		putchar(',');
	putchar(' ');

	putchar('\n');
	/* "\n" prints on a new line */

	return (0);
}
