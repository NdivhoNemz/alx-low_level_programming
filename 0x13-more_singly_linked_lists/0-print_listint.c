#include "lists.h"

/**
 * print_listint -  a function that prints all the elements of listint_t list.
 * @h: a pointer to a node in a linked list of type listint_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0; /* counter for number of nodes */

	while (h != NULL) /* Loop through list under this condition */
	{
		printf("%d\n", h->n); /* print int stored in current node */
		counter++; /* increment counter */
		h = h->next; /* move to next node in the linked list */
	}
	return (counter); /* Return total number of nodes printed */
}
