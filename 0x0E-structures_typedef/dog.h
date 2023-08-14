#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure
 * @name: name of dog
 * @age: his age
 * @owner: the name of the owner
 *
 * Description: structure about dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
