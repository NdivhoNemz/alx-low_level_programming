#include "lists.h"

/**
 * add_node_end - function adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to add to  new node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node; /* Declare pointer to new node */
	list_t *temp_ptr = *head; /* Declare temprory pointer for movmement */
	unsigned int len = 0; /* Initialise variable to store string length */

	while (str[len])
	{
		len++; /* Calculate string length */
	}

	new_node = malloc(sizeof(list_t)); /* Allocotes memory for new node */
	if (new_node == NULL)
	{
		return (NULL); /* Checks if memory allocation fails */
	}

	new_node->str = strdup(str); /* Duplicate string to new node */
	if (new_node->str == NULL)
	{
		free(new_node); /* If strdup fails, free allocated memeory */
		return (NULL);
	}

	new_node->len = len; /* Sets length of the new node */
	new_node->next = NULL; /* Sets new node's next pointer to NULL */

	if (*head == NULL)
	{
		*head = new_node;/* If list is empty, make new node the head */
		return (new_node);
	}

	while (temp_ptr->next)
	{
		temp_ptr = temp_ptr->next;/* Traverse list to find last node */
	}

	temp_ptr->next = new_node; /* Link last node to new node */
	return (new_node); /* Return address of the new element */
}
