#include "lists.h"
#include <stdio.h>
/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 *
 * @h: Parameter Pointer to the head of the linked list
 *
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
