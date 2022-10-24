#include "lists.h"

/**
 * sum_listint - function to sum all data integers
 * @head: head pointer
 * Return: sum of all data, 0 is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}
