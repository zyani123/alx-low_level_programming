#include "lists.h"
/**
 * listint_len - is a function that prints all the elements of a list_t list.
 * @h: linked list to count elements.
 * Return: the length of the list.
 */
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h; h = (*h).next, i++)
		;

	return (i);
}
