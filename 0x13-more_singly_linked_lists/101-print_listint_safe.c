#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int index, ncount;
	const listint_t *current, *visited[1024];

	ncount = 0;
	current = head;
	visited[1024] = NULL;
	while (current != NULL)
	{
		index = ((size_t)current) % 1024;
		if (visited[index] == current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
		visited[index] = current;
		printf("[%p] %d\n", (void *)current, current->n);

		current = current->next;
		ncount++;
	}
	return (ncount);
}
