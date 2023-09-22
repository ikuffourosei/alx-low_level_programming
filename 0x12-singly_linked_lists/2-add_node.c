#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer that pointers to another pointer
 * @str: string
 * Return: new node (res_node)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *res_node;

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
	res_node->next = *head;
	*head = res_node;

	return (res_node);


}
