#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *p;

	p = head;
	while (p != NULL)
	{
		head = head->next;
		free(p);
		p = head;
	}
}
