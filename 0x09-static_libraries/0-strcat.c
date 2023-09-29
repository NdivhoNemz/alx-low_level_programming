#include "main.h"

/**
 * _strcat - a function that concatenates two st
 * @dest: string to be appended from
 * @src: string to be appended to
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int str_1;
	int str_2;

	str_1 = 0;
	while (dest[str_1] != '\0')
	{
		str_1++;
	}
	str_2 = 0;
	while (src[str_2] != '\0')
	{
		dest[str_1] = src[str_2];
		str_1++;
		str_2++;
	}

	dest[str_1] = '\0';
	return (dest);
}
