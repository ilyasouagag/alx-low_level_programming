#include "lists.h"
/**
 * print_list - function that prints all the elements
 * @h: pointer to struct
 * Return: return count
 */
size_t print_list(const list_t *h)
{
	const list_t *current;
	size_t count = 0;

	for (current = h; current != NULL; current = current->next)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
			continue;
		}
		printf("[%u] %s\n", current->len, current->str);
		count++;
	}
	return (count);
}
