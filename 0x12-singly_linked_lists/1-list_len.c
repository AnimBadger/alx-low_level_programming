#include "lists.h"

/**
 * list_len - function to count number on elements in list
 * @h: head of the function
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
