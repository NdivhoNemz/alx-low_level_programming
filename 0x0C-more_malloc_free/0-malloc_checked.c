#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: number of bytes to be allocated through malloc
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;
/* pointer stores pointer ro the beginning of the allocated memory block */
	pointer = malloc(b);
/* The amount of memory to allocate is determined by the parameter b */
	if (pointer == NULL)
		exit(98);
/* if (ptr == NULL) checks if there's enough free memory */
	return (pointer);
}
/**
 * NULL - a pointer that does not point to any memory location.
 * If there isn't enough free memory to allocate it returns NULL.
 * The function calls exit(98). If pointer is NULL, exit 98 terminates program.
 */

