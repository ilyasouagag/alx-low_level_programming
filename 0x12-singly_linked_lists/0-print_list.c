#include "lists.h"
#include <string.h>
/**
 * print_list - function that prints all the elements
 * @h: pointer to struct
 * Return: return count
 */
size_t print_list(const list_t *h)
{
	const list_t *current;
	int count = 0;

	for (current = h; current != NULL; current = current->next)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)");
			continue;
		}
		printf("[%u] %s\n", current->len, current->str);
		count++;
	}
	return (count);
}
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}