#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
	if (head)
	{
		listint_t e, c;

		for (c.n = 1, e.next = head->next; e.next; c.n++, head = c.next)
		{
			for (e.n = 0, c.next = head; head != e.next; e.n++)
				head = head->next;
			if (e.n != c.n)
				return (head);
			e.next = head->next;
		}
	}
	return (NULL);
}
