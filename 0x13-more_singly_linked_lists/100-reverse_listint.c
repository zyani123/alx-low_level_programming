#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p0 = NULL, *p1 = *head;


	if (head == NULL || *head == NULL)
		return (*head);
	while (p1 != NULL)
	{
		p1 = (**head).next;
		(**head).next = p0;
		p0 = *head;
		*head = p1;
	}
	*head = p0;
	return (*head);
}
