#include "lists.h"

int sum_listint(listint_t *head)
{
	size_t i = 0;
	listint_t *p;

	p = head;
	if (head == NULL)
		return (0);
	while (p != NULL)
	{
		i += p->n;
		p = p->next;
	}
	return (i);
}
