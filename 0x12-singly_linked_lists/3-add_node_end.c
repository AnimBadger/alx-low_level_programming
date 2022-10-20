#include "lists.h"

/**
 * add_node_end - function that add node to end of list
 * @head: head of list
 * @str: string to be added to list
 * Return: address of new element, NULL if error
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		list_t *last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
	last_node->next = temp;
	}
	return (temp);
}
