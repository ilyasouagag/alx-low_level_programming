#include "lists.h"
/**
 * dlistint_len - returns the number of elements
 * @h: head of list
 * Return: return the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count = 0;

	for (current = h; current != NULL; current = current->next)
	{
		count++;
	}
	return (count);
}
