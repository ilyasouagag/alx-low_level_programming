#include "lists.h"
/**
 * insert_dnodeint_at_index - insert at any position
 * @h: address of head
 * @idx: index
 * @n: data
 * Return: return list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL;
	dlistint_t *node;
	dlistint_t *current;
	dlistint_t *other = *h;
	unsigned int count = 0;
	unsigned int i;

	if (other != NULL)
		while (other->prev != NULL)
			other = other->prev;
	for (current = other; current != NULL; current = current->next)
	{
		count++;
	}
	if (idx > count)
		return (NULL);
	if (idx == 0)
		temp = add_dnodeint(h, n);
	else if (idx == count)
		temp = add_dnodeint_end(h, n);
	else
	{
		temp = malloc(sizeof(dlistint_t));
		if (!temp)
			return (NULL);
		for (i = 0, node = other; i < idx; i++)
		{
			node = node->next;
		}
		temp->n = n;
		node->prev->next = temp;
		temp->prev = node->prev;
		temp->next = node;
		node->prev = temp;
	}
	return (temp);
}
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 5, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}