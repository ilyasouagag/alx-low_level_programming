#include "lists.h"
/**
 * add_node_end - function that adds node at end
 * @head: pointer to node
 * @str: string to duplicate
 * Return: return node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	new->next = NULL;
	return (*head);
}
