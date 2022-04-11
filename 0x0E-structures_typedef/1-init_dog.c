#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize variable type dog
 * @d: dog to be initialized
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 * Return: void
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	}
}
