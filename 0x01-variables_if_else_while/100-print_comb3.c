#include <stdio.h>

/**
 * main - a program that prints all possible different combinations of 2 digits
 * Return: 0
 */

int main(void)
{
	int digit_1, digit_2;

	for (digit_1 = '0'; digit_1 < '9'; digit_1++)
	for (digit_2 = digit_1 + 1; digit_2 <= '9'; digit_2++)

		if (digit_2 != digit_1)
			putchar(digit_1);
	putchar(digit_2);

	if (digit_1 == '8' && digit_2 == '9')
		putchar(',');
	putchar(' ');

	putchar('\n');

	return (0);
}
