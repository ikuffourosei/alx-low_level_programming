#include "lists.h"

/**
 * sum_dlistint - a function that 
 * sums all of the data of a dlistint_t linked list
 * @head: pointer to the head of the linked list
 * Return: sum of all list data,
 * - 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
