#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: pointer to the head node of the list.
 * Return: integer value (node count).
 */
size_t print_listint(const listint_t *h)
{
	unsigned int ncount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		ncount++;
	}
	return (ncount);
}
