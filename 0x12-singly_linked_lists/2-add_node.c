#include "lists.h"

/**
 * add_node - function adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string added to the node
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /* Declare pointer to a new node */
	unsigned int len = 0; /* Initialize variable to store string length */

	while (str[len])
	{
		len++; /* Calculate the length of the string */
	}

	new_node = malloc(sizeof(list_t)); /* Allocates memeory for new node */
	if (new_node == NULL)
	{
		return (NULL); /* Checks if memory allocation fails */
	}

	new_node->str = strdup(str); /* Duplicates string to the new node */
	if (new_node->str == NULL)
	{
		free(new_node); /* If strdup fails, free allocated memeory */
		return (NULL);
	}

	new_node->len = len; /* Sets length of the new node */
	new_node->next = *head; /* Points new node to the current head */
	*head = new_node; /* Updates head to point to new node */

	return (*head); /* Returns address of new element (new head) */
}
