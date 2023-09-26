#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of the list.
 * @head: Pointer that points to another pointer.
 * @n: The integer value of  each new node.
 * Return: result node, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *res_node, *store;

	res_node = malloc(sizeof(listint_t));
	if (res_node == NULL)
	{
		return (NULL);
	}
	res_node->n = n;
	res_node->next = NULL;

	if (*head == NULL)
	{
		*head = res_node;
		return (res_node);
	}
	store = *head;
	while (store->next != NULL)
	{
		store = store->next;
	}
	store->next = res_node;

	return (res_node);
}
