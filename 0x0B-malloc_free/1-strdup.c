#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function returns a pointer to a newly allocated space in memory
 * @str: character string
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *dup;
	int os, ns = 0;
/**
 * *dup - pointer to duplicate string
 * os - original string paremeter
 * ns - new string parameter
 * @NULL: if str = NULL
 */
	if (str == NULL)
	{
		return (NULL);
	}

	os = 0;
	while (str[os] != '\0')
	{
		os++;
	}

	dup = malloc(sizeof(char) * (os + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (ns = 0; str[ns]; ns++)
	{
		dup[ns] = str[ns];
	}
	return (dup);
}
