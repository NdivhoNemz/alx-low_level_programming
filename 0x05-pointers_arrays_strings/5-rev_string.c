#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: currrent string
 * Return: Reversed string
 */

void rev_string(char *s)
{
	int count = 0;
	int str_1;
	char str_2 = s[0];

	while (s[count] != '\0')
	{
		count++;
	}
	for (str_1 = 0; str_1 < count; str_1++)
	{
		count--;
		str_2 = s[str_1];
		s[str_1] = s[count];
		s[count] = str_2;
	}
}
