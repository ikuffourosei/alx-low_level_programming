#include "lists.h"

/**
 * free_listint2 - Function that frees a list and sets the head to NULL.
 * @head: Pointer taht points to a pointer of the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *curr_node;
	
	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		curr_node = *head;
		*head = (*head)->next;
		free(curr_node);
	}
}
