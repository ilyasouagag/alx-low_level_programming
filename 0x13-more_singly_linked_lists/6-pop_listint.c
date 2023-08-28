#include "lists.h"
/**
 * pop_listint - delete the first element
 * @head: pointer to node
 * Return: return data of deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int b;

	if (head == NULL || *head == NULL)
		return (0);
	*head = (*head)->next;
	b = current->n;
	free(current);
	return (b);
}
