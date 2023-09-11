#include <stdio.h>

/**
 * main - a program that prints all possible different combinations of 2 digits
 * Return: 0
 */

int main(void)
{
	int digit_1, digit_2;

	/**
	 * "digit_1 = '0'" begings print from number '0'
	 * "digit_1 < '9'" will end print at number '8'
	 * "digit_1++" will increase '0' one digit at a time until '9'
	 */
	for (digit_1 = '0'; digit_1 < '9'; digit_1++)
	{
		/**
	 * "digit_2 = digit_1 + 1" begings print from number '1'
	 * "digit_2 <= '9'" will end print at number '9'
	 * "digit_2++" will increase '0' one digit at a time until '9'
	 */
		for (digit_2 = digit_1 + 1; digit_2 <= '9'; digit_2++)
		{
			/* "digit_2 != digit_1" will avoid dupicate numbers */
			if (digit_2 != digit_1)
			{
				putchar(digit_1);
				putchar(digit_2);
			}
			/* "digit_1 == '8' && digit_2 == '9'" to exclude sep*/
			if (digit_1 == '8' && digit_2 == '9')
			{
				putchar('\n');
			}
			else
			{	/* seperate with space and , */
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
