#include "lists.h"
/**
 * free_listint2 - function that frees a linked list
 * @head: pointer to list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while (temp)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	*head = NULL;
}
