#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to node
 * Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	size_t sus = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
		return (0);
	current = *h;
	while (current != NULL)
	{
		temp = current->next;
		sus = current - current->next;
		if (sus > 0)
		{
			free(current);
			current = temp;
			count++;
		}
		else
		{
			free(current);
			*h = NULL;
			count++;
			break;
		}
	}
	*h = NULL;
	return (count);
}
