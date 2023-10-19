#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointer to the list_t list to print.
 * Return: number of node printed.
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0; /* Declare & initialise size count to 0 */

	while (h)
	{
		if (h->str == NULL) /* Checks if string is NULL */
		{
			printf("[0] (nil)\n"); /* Print "[0] (nil)" if NULL */
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			/* Prints the length and string */
		}
		h = h->next; /* Moves to next node */
		nodes++; /* Increments the size counter */
	}

	return (nodes); /* Returns the number of nodes printed */
}
