#include "lists.h"
/**
 * print_listint - function that prints all the elements
 * @h: pointer to list
 * Return: return the size
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	size_t count = 0;

	for (current = h; current != NULL; current = current->next)
	{
		printf("%d\n", current->n);
		count++;
	}
	return (count);
}
