#include "lists.h"
/**
 * sum_listint - sum of all the data of linked list
 * @head: pointer to node
 * Return : return the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);
	for (current = head; current != NULL; current = current->next)
	{
		sum += current->n;
	}
	return (sum);
}
