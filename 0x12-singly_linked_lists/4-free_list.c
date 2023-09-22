#include "lists.h"

/**
 * free_list - functon that frees list_t
 * @head: pointer
 */
void free_list(list_t *head)
{
	list_t *curr_node;
	list_t *next;

	curr_node = head;
	while (curr_node != NULL)
	{
		next = curr_node->next;
		free(curr_node->str);
		free(curr_node);
		curr_node = next;
	}
}
