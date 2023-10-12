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
	dlistint_t *temp = *h;
	dlistint_t *node;
	dlistint_t *current;
	unsigned int count = 0;
	unsigned int i;

	for (current = *h; current != NULL; current = current->next)
	{
		count++;
	}
	temp = malloc(sizeof(dlistint_t));
	if(!temp || idx >= count)
		return(NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (idx == count - 1)
	{
		return (add_dnodeint_end(h, n));
	}
	for (i = 0, node = *h; i < idx; i++)
	{
		node = node->next;
	}
	node->prev->next = temp;
	temp->prev = node->prev;
	temp->next = node;
	node->prev = temp;
	return (temp);
}
