#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: list_t list to be freed.
 */

void free_list(list_t *head)
{
	list_t *temp_ptr; /* Declares a temporary pointer */

	while (head)
	{
		temp_ptr = head->next; /* stores next node's address */

		free(head->str); /* Frees string within the current node */
		free(head); /* Frees the current node */

		head = temp_ptr; /* Move to the next node */
	}
}
