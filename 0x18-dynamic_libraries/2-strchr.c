#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: string to be checked for a character
 * @c: character searched for in the string
 * Return: a pointer to the first occurrence of the character c in the string s
 * or NULL if character not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
