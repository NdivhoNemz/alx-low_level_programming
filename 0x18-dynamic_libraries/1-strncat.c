#include "main.h"

/**
 * _strncat - a function that concatenates two st
 * @dest: string to be appended from
 * @src: string to be appended to
 * @n: inputed value
 * Return: dest (void)
 */

char *_strncat(char *dest, char *src, int n)
{
	int srt_1;
	int srt_2;

	srt_1 = 0;
	while (dest[srt_1] != '\0')
	{
		srt_1++;
	}

	srt_2 = 0;
	while (srt_2 < n && src[srt_2] != '\0')
	{
	dest[srt_1] = src[srt_2];
	srt_1++;
	srt_2++;
	}

	dest[srt_1] = '\0';
	return (dest);
}
