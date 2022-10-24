#include "lists.h"

/**
 * print_listint - function that count number of nodes
 * @h: head parameter passed
 * Return: number of nodes found
 */

size_t print_listint(const listint_t *h)
{
	listint_t const *temp = h;
	unsigned int count = 0;

	while (temp != NULL)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
