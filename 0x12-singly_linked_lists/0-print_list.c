#include "lists.h"
/**
 * print_list - function that prints all the elements
 * @h: pointer to struct
 * Return: return count
 */
size_t print_list(const list_t *h)
{
	list_t *current;
	int count = 0;

	for (current = h; current != NULL; current = current->next)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)");
			continue;
		}
		printf("[%d] %s\n", current->len, current->str);
		count++;
	}
	return (count);
}
