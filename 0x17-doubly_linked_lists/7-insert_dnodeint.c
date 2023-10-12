#include "lists.h"
/**
 * insert_dnodeint_at_index - insert at any position
 * @h: address of head
 * @idx: index
 * @n: data
 * Return: return list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new;
	unsigned int i = 0;

	if (*h != NULL)
		while ((*h)->prev != NULL)
			*h = (*h)->prev;
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current->next != NULL)
	{
		if (i == idx - 1)
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			new->n = n;
			new->next = current->next;
			new->prev = current;
			current->next->prev = new;
			current->next = new;
			break;
		}
		current = current->next;
		i++;
	}
	i++;
	if (idx == i)
		return (add_dnodeint_end(h, n));
	return (new);
}
