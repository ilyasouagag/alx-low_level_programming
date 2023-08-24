#include "lists.h"
/**
 * free_list - function that frees a list
 * @head: pointer to node
 */
void free_list(list_t *head)
{
	while (head)
	{
		list_t *current = head;

		while (current->next != NULL)
			current = current->next;

		free(current);
	}
}
