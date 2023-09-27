#include "lists.h"

/**
 * _re_alloc - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: previous list
 * @size: size of the new list
 * @new: new node to add to the list
 * Return: pointer to the new list
 */
listint_t **_re_alloc(listint_t **list, size_t size, listint_t *new)
{
	listint_t **n_list;
	size_t i;

	n_list = malloc(size * sizeof(listint_t *));
	if (n_list == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
	{
		n_list[i] = list[i];
	}
	n_list[i] = new;
	free(list);
	return (n_list);
}

/**
 * free_listint_safe - frees a listint_t linked list.
 * @head: pointer that points to another pointer
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	unsigned int i, ncount = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL)
	{
		return (ncount);
	}
	while (*head != NULL)
	{
		for (i = 0; i < ncount; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (ncount);
			}
		}
		ncount++;
		list = _re_alloc(list, ncount, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (ncount);
}
