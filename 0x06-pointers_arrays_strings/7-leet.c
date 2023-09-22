#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @n: character input value
 * Return: value of n
 */

char *leet(char *n)
{
	int x, y;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[x] == str1[y])
			{
				n[x] = str2[y];
			}
		}
	}
	return (n);
}
