#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head of list
 * @index: index to delete
 * Return: return 1 if succes, else 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (!(*head) || !head)
		return (-1);
	if (index == 0)
	{
		current = (*head);
		*(head) = current->next;
		free(current);
		return (1);
	}
	for (i = 0, current = *head; i < index; i++)
	{
		if(current == NULL)
			return (-1);
		current = current->next;
	}
	current->prev->next = current->next;
	current->next->prev = current->prev;
	free(current);
	return (1);
}
