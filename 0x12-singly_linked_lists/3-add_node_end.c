#include "lists.h"

/**
 * add_node_end -  a function that adds a new node at the end of a list_t list
 * @head: pointer to another ponter
 * @str: string constant
 * Return: res_node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *res_node;
	list_t *curr_node;

	if (str == NULL)
	{
		return (NULL);
	}

	res_node = malloc(sizeof(list_t));
	if (res_node == NULL)
	{
		return (NULL);
	}

	res_node->str = strdup(str);
	if (res_node->str == NULL)
	{
		free(res_node);
		return (NULL);
	}

	res_node->len = strlen(str);
	res_node->next = NULL;

	if (*head == NULL)
	{
		*head = res_node;
	}
	else
	{
		curr_node = *head;
		while (curr_node->next != NULL)
		{
			curr_node = curr_node->next;
		}
		curr_node->next = res_node;
	}
	return (res_node);
}
