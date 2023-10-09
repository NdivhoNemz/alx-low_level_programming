#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: a pointer to a dog structure to access & modify dog structure in memory
 */

void print_dog(struct dog *d)
{
	if (d == NULL) /* checks if dog pointer is NULL */
		return; /* If NULL then returns, as there's nothing to print */

	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
