#include "lists.h"
/**
 * free_dlistint - free a doubly linked list
 * @head: of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
