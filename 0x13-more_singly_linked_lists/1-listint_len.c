#include "lists.h"

/**
 * listint_len - function that returns number of elements in a list
 * @h: pointer to head node of the list
 * Return: (integer) number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
