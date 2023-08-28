#include "lists.h"
/**
 * add_nodeint - function that adds a new node at beginning
 * @head: pointer to struct
 * @n: data
 * Return: return node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}