#include "lists.h"
/**
 * add_dnodeint_end - function to add node at end of list
 * @head: head of list
 * @n: data of new node
 * Return: address of list or NULL is error
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	temp = *head;

	if (new_node == NULL || head == NULL)
	{
		return (NULL);
	}
	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
		temp = temp->next;
		}
		temp->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	new_node->prev = temp;

	return (*head);
}
