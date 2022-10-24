#include "lists.h"

/**
 * get_nodeint_at_index - fuction to get node at given index
 * @head: head of list
 * @index: position of node
 * Return: node at position
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;

	unsigned int count;

	for (count = 0; count < index; count++)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}
	return (temp);
}
