#include "lists.h"

/**
 * add_nodeint - function to add node at beginnning of list
 * @head: head of the list
 * @n: integer data
 * Return: new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;

	temp->next = *head;
	*head = temp;

	return (temp);
}
