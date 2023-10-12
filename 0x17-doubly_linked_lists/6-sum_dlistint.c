#include "lists.h"
/**
 * sum_dlistint - return the sum of data
 * @head: head of node
 * Return: return the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	for (current = head; current != NULL; current = current->next)
	{
		sum += current->n;
	}
	return (sum);
}
