#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * @size: array size
 * @c: assigned specific char
 * Return: a pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i; /* int must be positve or 0 */

	str = malloc(sizeof(char) * size);
/* sizeof will determine the memory allocate (char(1 byte) * size) */
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
/* returns the address to the array/string */
}
