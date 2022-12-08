#include "lists.h"
/**
 * print_dlistint - function that checks the number of nodes
 * in a double linked list
 * @h: head of list
 * Return: NUmber of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	int sums = 0;

	if (h == NULL)
	{
		return (sums);
	}
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		sums++;
	}
	return (sums);
}
