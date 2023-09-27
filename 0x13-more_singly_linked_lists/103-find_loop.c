#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: pointer to the first node of the list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first_ptr, *second_ptr;

	first_ptr = second_ptr = head;
	while (first_ptr && second_ptr && second_ptr->next)
	{
		first_ptr = first_ptr->next;
		second_ptr = second_ptr->next->next;
		if (first_ptr == second_ptr)
		{
			first_ptr = head;
			break;
		}
	}
	if (!first_ptr || !second_ptr || !second_ptr->next)
	{
		return (NULL);
	}
	while (first_ptr != second_ptr)
	{
		first_ptr = first_ptr->next;
		second_ptr = second_ptr->next;
	}
	return (second_ptr);
}
