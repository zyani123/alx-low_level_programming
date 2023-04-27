#include "lists.h"
/**
 * print_listint - is a function that prints all the elements of a list_t list.
 * @h: linked list to print.
 * Return: the length of the list.
 */
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h; h = (*h).next, i++)
		printf("%d\n", (*h).n);

	return (i);
}
