#include "lists.h"
/**
 * get_dnodeint_at_index - function to get node
 * @head: head of list
 * @index: index to fetch from list
 * Return: value at node, NULL if otherwise
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int track;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head->prev != NULL)
	{
		head = head->prev;
	}
	track = 0;

	while (head != NULL)
	{
		if (track == index)
		{
			break;
		}
		head = head->next;
		track++;
	}
	return (head);
}
