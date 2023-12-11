#include "main.h"

/**
 * _strncpy - a funtion that copy a string
 * @dest: copied string
 * @src: original string
 * @n: input value
 *
 * Return: dest (void)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int str;

	str = 0;
	while (str < n && src[str] != '\0')
	{
		dest[str] = src[str];
		str++;
	}
	while (str < n)
	{
		dest[str] = '\0';
		str++;
	}
	return (dest);
}
