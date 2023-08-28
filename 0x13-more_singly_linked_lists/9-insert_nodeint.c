#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to fisrt node
 * @idx: index where it should be added
 * @n: data
 * Return: return node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *current = *head;

	new = malloc(sizeof(listint_t));
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx - 1; i++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
