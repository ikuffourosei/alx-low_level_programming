#include "lists.h"

/**
 * re_alloc - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: previous list
 * @size: size of the new list
 * @new: new node to be added to the list
 * Return: pointer to newly formed list
 */
const listint_t **re_alloc(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **n_list;
	unsigned int i;

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
 * print_listint_safe -a function that prints a listint_t linked list.
 * @head: pointer to the first node of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int i, ncount;
	const listint_t **list = NULL;

	ncount = 0;
	while (head != NULL)
	{
		for (i = 0; i < ncount; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (ncount);
			}
		}
		ncount++;
		list = re_alloc(list, ncount, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (ncount);
}
