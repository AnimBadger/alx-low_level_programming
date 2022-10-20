#include "lists.h"

/**
 * add_node - adds a node at beginning
 * @head: head of linked list
 * @str: strint to add to list
 * Return: address of new head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;

	return (*head);
}
