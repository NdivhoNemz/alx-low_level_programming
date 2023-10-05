#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb:  number of elements you want to allocate memory for.
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	memset(pointer, 0, nmemb * size);
/* _calloc uses memset to set all bytes in the newly allocated memory to 0. */
	return (pointer);
}
/**
 * _calloc - returns a pointer to the newly allocated and initialized memory.
 * this pointer can be used just like an array of nmemb elements
 */
