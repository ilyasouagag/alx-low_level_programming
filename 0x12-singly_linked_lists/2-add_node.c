#include "lists.h"
/**
 * add_node - function that adds a new node at beginning
 * @head: pointer to struct
 * @str: string to be duplicated
 * Return: return node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
