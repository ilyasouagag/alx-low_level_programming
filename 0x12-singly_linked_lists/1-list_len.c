#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * @h: pointer to node
 * Return: how many elements in node
 */
size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t count = 0;

	for (current = h; current != NULL; current = current->next)
	{
		count++;
	}
	return (count);
}
