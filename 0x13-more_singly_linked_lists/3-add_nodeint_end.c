#include "lists.h"
/**
 * add_nodeint_end - function that adds node at end
 * @head: pointer to node
 * @n: data
 * Return: return node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *current = *head;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = temp;
	return (temp);
}
