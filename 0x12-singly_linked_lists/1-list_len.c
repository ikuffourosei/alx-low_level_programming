#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to linked list
 * Return: unsigned int (count)
 */
size_t list_len(const list_t *h)
{
	unsigned int count;

	count  = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
