#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at a given position
 * @head: pointer to fisrt node
 * @index: index of the node that should be deleted
 * Return: return if it succeeded or not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current = *head;
	listint_t *prev;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; current != NULL && i < index; current = current->next)
	{
		prev = current;
		i++;
	}
	prev->next = current->next;
	free(current);
	return (1);
}
