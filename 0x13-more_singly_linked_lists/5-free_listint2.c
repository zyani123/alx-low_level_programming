#include "lists.h"
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;
	p = *head;
	while (p != NULL)
	{
		*head = (**head).next;
		free(p);
		p = *head;
	}
	*head = NULL;
}

