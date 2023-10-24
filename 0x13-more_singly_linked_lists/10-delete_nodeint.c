#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head; /* Create a temporary pointer to the head */
	listint_t *current = NULL; /* Create a pointer to the current node */
	unsigned int i = 0; /* Initialize an index counter */

	if (*head == NULL)
	{
		return (-1); /* If the list is empty, return -1 (Fail) */
	}
	if (index == 0)
	{
		*head = (*head)->next; /*Update the head to the next node */
		free(temp); /* Free the memory of the original head */
		return (1); /* Return 1 (Success) */
	}
	while (i < index - 1)
	{
		if (temp == NULL || temp->next == NULL)
		{
			return (-1); /*If index out of bounds,return -1 fail */
		}
		temp = temp->next; /* Move to the next node */
		i++;
	}
	current = temp->next; /* Set current to the node to delete */
	temp->next = current->next; /* Update previous node's next pointer */
	free(current);  /* Free the memory of the node to delete */

	return (1); /* Return 1 (Success) */
}

