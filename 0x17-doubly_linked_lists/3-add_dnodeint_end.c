#include "lists.h"
/**
 * add_dnodeint_end - add node at end of node
 * @head: head of node
 * @n: data
 * Return: pointer to head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *current = *head;

	temp = malloc(sizeof(dlistint_t));
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
		(*head) = temp;
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = temp;
		temp->prev = current;
	}
	return (*head);
}
