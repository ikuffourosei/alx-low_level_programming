#include "lists.h"

/**
 * free_list - functon that frees list_t
 * @head: pointer
 */
void free_list(list_t *head)
{
	list_t *res_node;

	while (head != NULL)
	{
		res_node = head->next;
		free(head);
		head = res_node;
	}
}
