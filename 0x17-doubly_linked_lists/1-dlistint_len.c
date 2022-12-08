#include "lists.h"
/**
 * dlistint_len - function that count length of linked list
 * @h: head of list
 * Return: length of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	int leng = 0;

	if (h == NULL)
	{
		return (leng);
	}
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h != NULL)
	{
		leng++;
		h = h->next;
	}
	return (leng);
}
