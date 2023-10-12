#include "lists.h"
/**
 * get_dnodeint_at_index - return nth node linked list
 * @head: head of the node
 * @index: index of list to return
 * Return: return the list at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *temp;
	unsigned int count = 0;
	unsigned int i;

	for (current = head; current != NULL; current = current->next)
	{
		count++;
	}
	if (index >= count)
		return (NULL);
	for (i = 0, temp = head; i < index; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
