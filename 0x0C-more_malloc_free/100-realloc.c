#include "main.h"
/**
 * _realloc - function that reallocates a memory block
 * @ptr: string
 * @old_size: old_size
 * @new_size: new size
 * Return: return pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < new_size && i < old_size; i++)

		*((char *)p + i) = *((char *)ptr + i);
	free(ptr);

	return (p);
}
