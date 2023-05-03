#include "lists.h"

void free_list1(listn_t **head)
{

	listn_t *p;

	while (head != NULL && *head != NULL)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
}


int add_n1(listn_t **head, listint_t *node)
{
	listn_t *new = malloc(sizeof(listn_t));

	if (new)
	{
		new->node = node;
		if (*head)
			new->next = *head;
		else
			new->next = NULL;
		*head = new;
	}
	else
		return (0);
	return (1);
}
/**
 * find1 - function that check if a node was printed previously
 * @head: pointer to the first node.
 * @node: node to be checked
 * Return: 1 if exits, 0 if not.
 */

int find1(listn_t *head, listint_t *node)
{
	int find = 0;

	while (head)
	{
		if (head->node == node)
			find = 1;
		head = head->next;
	}
	return (find);
}

size_t free_listint_safe(listint_t **h)
{
	size_t cont = 0;
	listn_t *list;
	listint_t *cpy;

	list = NULL;

	while (h && *h)
	{
		cpy = (*h)->next;
		if (find1(list, *h))
			break;
		if (add_n1(&list, *h) == 0)
		{
			free_list1(&list);
			exit(98);
		}
		free(*h);
		*h = cpy;
		cont++;
	}
	free_list1(&list);
	*h = NULL;
	return (cont);
}
