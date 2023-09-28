#include "main.h"

/**
 * wildcmp - a function that compares two strings and returns 1, otherwise 0.
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: 1 if identical, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1)); /* increment each char */
		}
		return (*s2 == '\0'); /* string end with null character */
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2) /* if strings not identical */
	{
		return (wildcmp(s1 + 1, s2 + 1)); /* no reversals */
	}
	return (0);
}
