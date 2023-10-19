#include "lists.h"

/**
 * list_len - function returning the number of elements in a linked list.
 * @h: pointer to the list_t list
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0; /* Initialize counter for number of elemnets */

	while (h)
	{
		elements++; /* Increment element counter */
		h = h->next; /* Moves to the next node */
	}

	return (elements); /* Returns number of elements in linked list */
}
