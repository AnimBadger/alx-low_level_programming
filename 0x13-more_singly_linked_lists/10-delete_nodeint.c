#include "lists.h"

/**
 * delete_nodeint_at_index - function to delete node at given index
 * @head: head of list
 * @index: position to delete
 * Return: 1 is success else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *track, *deletor;

	unsigned int count;

	track = *head;
	deletor = *head;

	if (head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = deletor->next;

		free(deletor);
		return (1);
	}
	for (count = 0; count < (index - 1); count++)
	{
		track = deletor;
		deletor = deletor->next;
	}
	track->next = deletor->next;
	free(deletor);

	return (1);
}
