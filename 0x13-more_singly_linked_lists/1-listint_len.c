#include "lists.h"

/**
 * listint_len - function to count number of elements
 * @h: head passed as parameter
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	listint_t const *temp = h;

	unsigned int count = 0;

	while (temp != 0)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
