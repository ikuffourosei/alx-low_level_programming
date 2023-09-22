#include "lists.h"

/**
 * print_list - function that prits singly linked list
 * @h:pointer to singly linked list
 * Return: n (node count)
 */
size_t print_list(const list_t *h)
{
	unsigned int n;

	n = 0;
	while(h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}
