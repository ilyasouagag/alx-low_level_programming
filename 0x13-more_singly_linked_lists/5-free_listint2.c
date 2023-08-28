#include "lists.h"
/**
 * free_listint2 - function that frees a linked list
 * @head: pointer to list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp = *head;

	if (head == NULL)
		return;
	while (temp)
	{
		current = temp->next;
		free(temp);
		temp = current;
	}
	*head = NULL;
}
