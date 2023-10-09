#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees dogs.
 * @d: struct dog to free
 */

void free_dog(dog_t *d)
{
	if (d) /* checks if the dog pointer is not NULL */
	{
		free(d->name);
		free(d->owner);
		free(d);
	/**
	 * These lines free the memory allocated for
	 * the name and owner fields of the dog structure.
	 * and then the structure itself.
	 */
	}
}
/* Frees up all space allocotated by malloc */
