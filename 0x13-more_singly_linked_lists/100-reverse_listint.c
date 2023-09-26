#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: double pointer
 * Return: address of the first node in the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *store, *next;

	if (head == NULL)
	{
		return (NULL);
	}
	if ((*head)->next == NULL)
	{
		return (*head);
	}
	store = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = store;
		store = *head;
		*head = next;
	}
	*head = store;
	return (*head);
}
