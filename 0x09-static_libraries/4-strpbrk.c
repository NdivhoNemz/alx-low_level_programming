#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string to be searched
 * @accept: substring withmatching byte to s string
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if matching byte is missing.
 */

char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
		s++;
		}

	return ('\0');
}
