#include "lists.h"
#include <string.h>
/**
 * print_dlistint - prints all elements of list
 * @h: head of the node
 * Return: return number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count = 0;

	for (current = h; current != NULL; current = current->next)
	{
		printf("%d\n", current->n);
		count++;
	}
	return (count);
}
