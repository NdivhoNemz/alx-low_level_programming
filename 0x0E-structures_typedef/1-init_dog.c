#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: a pointer to a dog structure. The function will modify this structure.
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
/* Checks if the dog pointer is NULL */
/* If it is NULL, it allocates memeory for a new dog structure */
	d->name = name;
	d->age = age;
	d->owner = owner;
/* Lines set name, age & owner fields of dog structure to provided values. */
}
