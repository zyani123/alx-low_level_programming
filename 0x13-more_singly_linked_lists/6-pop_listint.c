#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *p;
	int i;

	if (*head == NULL || head == NULL)
		return (0);
	p = *head;
	i = p->n;
	*head = (**head).next;
	free(p);
	return (i);
}
