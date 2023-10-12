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
	dlistint_t *new = NULL;
	dlistint_t *current = *h;
	unsigned int i = 0;

	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		while (current && i < idx - 1)
		{
			current = current->next;
			i++;
		}
		if (!current)
			return (NULL);

		if (!current->next)
		{
			new = add_dnodeint_end(h, n);
		}
		else
		{
			new = malloc(sizeof(dlistint_t));
			if (new)
			{
				new->n = n;
				new->next = current->next;
				new->prev = current;
				current->next->prev = new;
				current->next = new;
			}
		}
	}

	return (new);
}
