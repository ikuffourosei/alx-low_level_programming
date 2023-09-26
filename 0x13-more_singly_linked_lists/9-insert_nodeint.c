#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @head: pointer that points to another pointer
 * @idx: index of the node
 * @n: new node integer value
 * Return: address of result node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *res_node, *store;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx != 0)
	{
		store = *head;
		for (i = 0; i < idx - 1 && store != NULL; i++)
		{
			store = store->next;
		}
		if (store == NULL)
		{
			return (NULL);
		}
	}
	res_node = malloc(sizeof(listint_t));
	if (res_node == NULL)
	{
		return (NULL);
	}
	res_node->n = n;
	if (idx == 0)
	{
		res_node->next = *head;
		*head = res_node;
		return (res_node);
	}
	res_node->next = store->next;
	store->next = res_node;
	return (res_node);
}
