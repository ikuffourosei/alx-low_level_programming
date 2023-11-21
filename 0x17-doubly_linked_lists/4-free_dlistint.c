#include "lists.h"

/**
 * free_dlistint - fuction that frees the dlistint_t list
 * @head: pointer to the head of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
