#include "lists.h"
/**
 * print_listint_safe - function that prints linked list
 * @head: pointer to struct
 * Return: return count
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	const listint_t *prev;
	size_t count = 0;
	size_t a;

	current = prev = NULL;
	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
		prev = head;
		a = 0;
		while (a < count)
		{
			if (current == prev)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}
			prev = prev->next;
			a++;
		}
		if (head == NULL)
		exit(98);
	}
	return (count);
}
