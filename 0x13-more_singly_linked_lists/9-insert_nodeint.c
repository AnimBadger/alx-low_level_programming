#include "lists.h"

/**
 * insert_nodeint_at_index - function to add node a given pos
 * @head: head of list
 * @idx: index, position to insert node
 * @n: data to insert
 * Return: address of new node or NULL if error
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *temp, *new_node;

	temp = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	for (count = 0; count != (idx - 1); count++)
	{
		temp = temp->next;
	}
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
