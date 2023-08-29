#include "lists.h"
/**
 * find_listint_loop - function that finds the loop
 * @head: pointer to node
 * Return: return a pointer to node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current;
	listint_t *temp;

	current = temp = head;
	if (head == NULL)
		return (NULL);

	while (current != NULL && temp != NULL && temp->next != NULL)
	{
		temp = temp->next->next;
		current = current->next;
		if (temp == current)
		{
			current = head;
			while (current != temp)
			{
				current = current->next;
				temp = temp->next;
			}
			return (temp);
		}
	}
	return (NULL);
}
