#include "lists.h"
/**
 * listint_len - return the number of elements
 * @h: pointer to list
 * Return: return the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	size_t len = 0;

	for (current = h; current != NULL; current = current->next)
		len++;
	return (len);
}
