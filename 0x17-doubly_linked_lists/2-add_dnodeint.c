#include "lists.h"
/**
 * add_dnodeint - function to add node to first of list
 * @head: head of list
 * @n: data of node
 * Return: head of list
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	temp = *head;
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	if (temp != NULL)
	{
		while (temp->prev != NULL)
		{
			temp = temp->prev;
		}
		new_node->next = temp;
		temp = new_node;
		temp->prev = new_node;
	}
	return (new_node);
}
