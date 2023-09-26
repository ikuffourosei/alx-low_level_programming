#include "lists.h"

/**
 * sum_listint - a function that returns the sum
 * of all the data (n) of a listint_t linked list.
 * @head: pointer to the first node
 * Return: intger value (sum)
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
