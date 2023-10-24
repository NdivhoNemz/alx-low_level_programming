#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t)); /* allocates memory for new node */
	if (new == NULL || head == NULL)
		return (NULL); /* if mempry allocation or head is invalid */

	new->n = n; /* Set new node value */
	new->next = NULL; /* Initialise next pointer to NULL */

	if (idx == 0)
	{
		new->next = *head; /* set next pointer of new node to head */
		*head = new; /* Update head to new node */
		return (new); /* return pointer to new node */
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL); /* Return NULL if index is out out bounds */
}
