#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: main string with a substring within
 * @needle: substring to be located
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *string = haystack;
		char *sub_string = needle;

		while (*string == *sub_string && *sub_string != '\0')
		{
			string++;
			sub_string++;
		}

		if (*sub_string == '\0')
			return (haystack);
	}

	return (0);
}
