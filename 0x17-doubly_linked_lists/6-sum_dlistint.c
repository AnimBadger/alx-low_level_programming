#include "lists.h"

/**
 * sum_dlistint - function to sum all numbers
 * @head: head of list
 * Return: total, or 0 if otherwise
*/
int sum_dlistint(dlistint_t *head)
{
	int sums = 0;

	if (head == NULL)
	{
		return (sums);
	}
	while (head->prev != NULL)
	{
		head = head->prev;
	}
	while (head != NULL)
	{
		sums += head->n;
		head = head->next;
	}
	return (sums);
}
