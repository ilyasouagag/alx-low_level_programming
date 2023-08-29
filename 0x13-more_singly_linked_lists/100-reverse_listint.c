#include "lists.h"
/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to list
 * Return: return a reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prev = NULL;

	while (current != NULL)
	{
		if (*head == NULL || head == NULL)
			return (NULL);

		*head = current->next;
		current->next = prev;
		prev = current;
		current = *head;
	}
	*head = prev;
	return (*head);
}
