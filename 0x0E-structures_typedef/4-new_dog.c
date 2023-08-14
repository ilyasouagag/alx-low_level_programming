#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: his age
 * @owner: owner of the dog
 * Return: return the created struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1 = 0, len2 = 0;
	dog_t *dog;

	while (name[len1])
		len1++;
	while (owner[len2])
		len2++;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{

		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	int i, j;

	dog->age = age;
	for (i = 0; name[i] != 0; i++)
	{
		dog->name[i] = name[i];
	}
	dog->name[i] = '\0';
	for (j = 0; owner[j] != 0; j++)
	{
		dog->owner[j] = owner[j];
	}
	dog->owner[j] = '\0';
	return (dog);
}
