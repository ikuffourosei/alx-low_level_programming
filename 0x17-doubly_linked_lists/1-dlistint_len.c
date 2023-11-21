#include "lists.h"

/**
 * dlistint_len - a function that 
 * count the number of nodes in a  linked list
 * @h: pointer to the head of a linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
