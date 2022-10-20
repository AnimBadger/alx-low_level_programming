#include "lists.h"

/**
 * add_node - adds a node at beginning
 * @head: head of linked list
 * @str: strint to add to list
 * Return: address of new head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = string_length(str);
	temp->next = *head;
	*head = temp;

	return (*head);
}

/**
 * string_length - length of the string
 * @pointer: pointer of string
 * Return: length
 */

int string_length(const char *pointer)
{
	int counter = 0;

	while (*(pointer + counter) != '\0')
	{
		counter++;
	}
	return (counter);
}
