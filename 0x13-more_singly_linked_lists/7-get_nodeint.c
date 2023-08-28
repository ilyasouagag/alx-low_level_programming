#include "lists.h"
/**
 * get_nodeint_at_index - function that return the nth node
 * @head: pointer to node
 * @index: index of node we want to return
 * Return: return the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	listint_t *temp;
	unsigned int j = 0, i = 0;

	for (current = head; current != NULL; current = current->next)
	{
		i++;
	}
	if (index > i - 1)
		return (NULL);
	for (temp = head; temp != NULL && j < index; temp = temp->next, j++)
	{
	}
	return (temp);
}

