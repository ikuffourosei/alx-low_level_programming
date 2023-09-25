#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * a struct for singly linked list of integers
 * @n: integer value
 * @next: pointer to next node
 */
typedef struct listint
{
	int n;
	struct listint *next;
} listint_t;
size_t print_listint(const listint_t *h);
#endif /* LISTS_H */
