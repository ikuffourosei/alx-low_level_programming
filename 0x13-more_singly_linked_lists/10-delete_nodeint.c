#include "lists.h"

/**
 * delete_nodeint_at_index -  a function that deletes the node at index
 * of a listint_t linked list.
 * @head: pointer taht points to another pointer
 * @index: index of node
 * Return: intger value (pointer to the index node)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *next, *store;

	if (head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	store = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (store->next == NULL)
		{
			return (-1);
		}
		store = store->next;
	}
	next = store->next;
	store->next = next->next;
	free(next);
	return (1);
}
