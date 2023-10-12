#include "lists.h"
/**
 * add_dnodeint - add node at beginning
 * @head: pointer to adress of the head of node
 * @n: data to insert in each node
 * Return: value
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		(*head) = temp;
	}
	else
	{
		temp->next = (*head);
		(*head)->prev = temp;
		(*head) = temp;
	}
	return (*head);
}
