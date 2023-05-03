#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux;

	aux = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (aux == NULL)
		*head = new;
	else
	{
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = new;
	}
	return (*head);
}
