#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int counter1 = 0, counter2 = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
	{
		length1++;
	}
	while (s2 && s2[length2])
	{
		length2++;
	}
	if (n < length2)
	{
		new_string = malloc(sizeof(char) * (length1 + n + 1));
	}
	else
	{
		new_string = malloc(sizeof(char) * (length1 + length2 + 1));
	}
	if (!new_string)
	{
		return (NULL);
	}
	while (counter1 < length1)
	{
		new_string[counter1] = s1[counter1];
		counter1++;
	}
	while (n < length2 && counter1 < (length1 + n))
	{
		new_string[counter1++] = s2[counter2++];
	}
	while (n >= length2 && counter1 < (length1 + length2))
	{
		new_string[counter1++] = s2[counter2++];
	}
	new_string[counter1] = '\0';
	return (new_string);
}
/* length1 & length2 - store the lengths of the strings s1 & s2 respectively */
/* counter2 tracks current position in s2 when characters added to new_string*/
/* counter1 tracks current position of new string */
/* new_string - holds the concatenated result */
