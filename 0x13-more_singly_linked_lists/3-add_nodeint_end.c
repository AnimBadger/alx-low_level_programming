#include "lists.h"

/**
 * add_nodeint_end - function to add node to end of list
 * @head: head of list
 * @n: integer data
 * Return: address to new node or NULL if failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *main_data;

	main_data = malloc(sizeof(listint_t));
	if (main_data == NULL)
	{
		return (NULL);
	}
	main_data->n = n;
	main_data->next = NULL;

	if (*head == NULL)
	{
		*head = main_data;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = main_data;
	}
	return (main_data);
}
