#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *p;

	p = head;
	for (i = 0; p != NULL; i++)
		p = p->next;
	if (index > i)
		return (NULL);
	p = head;
	for (i = 0; i != index; i++)
		p = p->next;
	return (p);
}
