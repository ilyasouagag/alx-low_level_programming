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
	dlistint_t *temp = NULL;
	dlistint_t *node;
	dlistint_t *current;
	dlistint_t *other = *h;
	unsigned int count = 0;
	unsigned int i;

	if (other != NULL)
		while (other->prev != NULL)
			other = other->prev;
	for (current = other; current != NULL; current = current->next)
	{
		count++;
	}
	if (idx > count)
		return (NULL);
	if (idx == 0)
	{
		temp = add_dnodeint(h, n);
	}
	else if (idx == count)
	{
		temp = add_dnodeint_end(h, n);
	}
	else
	{
		temp = malloc(sizeof(dlistint_t));
		if (!temp)
			return (NULL);
		for (i = 0, node = other; i < idx; i++)
		{
			node = node->next;
		}
		temp->n = n;
		node->prev->next = temp;
		temp->prev = node->prev;
		temp->next = node;
		node->prev = temp;
	}
	return (temp);
}
