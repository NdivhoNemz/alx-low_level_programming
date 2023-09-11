#include <stdio.h>

/**
 * main - a program that prints all possible different combinations of 2 digits
 * Return: 0
 */

int main(void)
{
	int digit_1, digit_2, digit_3;

	for (digit_1 = '0'; digit_1 <= '7'; digit_1++)
	{
		for (digit_2 = digit_1 + 1; digit_2 <= '8'; digit_2++)
		{
			/**
	 * "digit_3 = digit_2 + 1" begings print from number '2'
	 * "digit_3 <= '9'" will end print at number '9'
	 * "digit_3++" will increase '0' one digit at a time until '9'
	 */
			for (digit_3 = digit_2 + 1; digit_3 <= '9'; digit_3++)
			{
	/* "digit_2 != digit_1 = digit_3" will avoid dupicate numbers */
				if ((digit_2 != digit_1) != digit_3)
				{
					putchar(digit_1);
					putchar(digit_2);
					putchar(digit_3);
				}
	/* "digit_1 == '7' && digit_2 == '8'" to exclude seperation*/
				if (digit_1 == '7' && digit_2 == '8')
				{
				putchar('\n');
				}
				else
				{
			/* seperation with ' ' and ',' */
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
