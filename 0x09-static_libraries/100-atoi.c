#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: converted
 *
 * Return: int converted from the string
 */

int _atoi(char *s)
{
	int iterator = 0;
	int counter = 0;
	int value = 0;
	int length = 0;
	int num = 0;
	int checker = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (iterator < length && checker == 0)
	{
		if (s[iterator] == '-')
		{
			++counter;
		}
		if (s[iterator] >= '0' && s[iterator] <= '9')
		{/* - '0' converst char into int */
			num = s[iterator] - '0';
			if (counter % 2)
			{/* counter checks '-' sign whether odd or even */
				num = -num;
			}
			value = value * 10 + num;
			checker = 1;
			if (s[iterator + 1] < '0' || s[iterator + 1] > '9')
			{
				break;
			}
			checker = 0;
		}
		iterator++;
	}
	if (checker == 0)
	{
		return (0);
	}
	return (value); /* converted string to int */
}
