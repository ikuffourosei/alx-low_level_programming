#include "lists.h"

/**
 * add_ndoeint - adds a new node
 * @head: pointe that points to another pointer
 * @n: intger value stored in each node
 * Return: result node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *res_node;

	res_node = malloc(sizeof(listint_t));
	if (res_node == NULL)
	{
		return (NULL);
	}
	res_node->n = n;
	res_node->next = *head;
	*head = res_node;
	return (res_node);
}
