#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: Pointer to a pointer.
 * Return: data (n) 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *store;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	store = *head;
	n = store->n;
	*head = store->next;
	free(store);
	return (n);
}
